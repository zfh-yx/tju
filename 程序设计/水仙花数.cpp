#include<bits/stdc++.h>
using namespace std;
bool narcisnum(int i){
	int a,b,c;
		a = i % 10;//�������λ
		b = i / 10 % 10;//�����ʮλ
		c = i / 100 ;//�������λ
		int d =a * a * a + b * b * b + c * c * c;
		return d==i;
}
int main()
{
	int m,n;
	while(cin>>m>>n){
		int num=0;
		for(int x=m;x<=n;x++){
			if(narcisnum(x)){
				cout<<x<<" ";
				num++;
			}
		}
		if(num==0)
		cout<<"no"<<endl;	
	}
	return 0;
}
