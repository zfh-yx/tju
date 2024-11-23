#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

const int Max = 25;
bool visit[Max];
int a[20];
int side, N;

bool square(int sum, int num, int position)
{
	if(num == 3)
		return true;
	int sample = 0;	
	for(int i = position; i < N; i++)
	{
		if(a[i]>side||visit[i]==true||sum+a[i]>side||a[i]==sample)
			continue;
		visit[i] = true;
		if(sum + a[i] == side)
		{
			if(square(0, num + 1, 0))
				return true;
			else
				sample = a[i];
		}
		else{
			if(square(sum + a[i], num, i + 1))
				return true;
			else
				sample = a[i];
		}
		visit[i] = false;
	}
}
int main(){
	int T;cin>>T;
	int len=0;
	for(int i=0;i<T;i++)
	{  
		cin >> N;
		for(int i = 0; i < N; i++)                    
		{
			cin >> a[i];
			len += a[i];
		}
		side = len/4;
		sort(a,a+N);
		visit[0]=true;
		if(len%4==0&&a[N]<=side)		
		{
			if(square(0, 0, 0))
				cout <<  "yes" << endl;
			else
				cout <<  "no" << endl;
		}
		else cout<<"no"<<endl;
	}
	return 0;
}
