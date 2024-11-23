#include<bits/stdc++.h>
using namespace std;
int main(){
	int value[7];
	for(int i = 1;i <= 6;i++)
	{
		int p;
		cin>>p;
		value[i]=p;
		
	}
	int a[7]={0,1,2,3,4,5,6};
	int b[7];
	string s;
	cin>>s;
	for(int i = 0;i < s.length();i++)
	{
		if(s[i]=='W'){
			b[1]=a[3];b[2]=a[2];b[3]=a[6];b[4]=a[1];b[5]=a[5];b[6]=a[4];
		}
		else if(s[i]=='E'){
			b[1]=a[4];b[2]=a[2];b[3]=a[1];b[4]=a[6];b[5]=a[5];b[6]=a[3];
		}
		else if(s[i]=='N'){
			b[1]=a[2];b[2]=a[6];b[3]=a[3];b[4]=a[4];b[5]=a[1];b[6]=a[5];
		}
		else if(s[i]=='S'){
			b[1]=a[5];b[2]=a[1];b[3]=a[3];b[4]=a[4];b[5]=a[6];b[6]=a[2];
		}
		memcpy(a,b,sizeof(a));
		
	}
	cout<<value[a[1]];
}

