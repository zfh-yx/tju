#include<bits/stdc++.h>
using namespace std;
int main()
{
	double num[100]={0}; 
	char op[100]={0}; 
	char ch; 
	int m=0;
	while(cin>>num[m])
	{
		ch=getchar(); 
		if(ch=='\n')break;
		op[m]=getchar();
		m++;
	}
	for(num[0],ch;num[0]!=0||ch!='\n';) 
	{
		for(int i=0;i<=m;i++) 
		{
			if(op[i]=='*')
			{
				num[i]=num[i]*num[i+1];
				for(int t=i+1;t<=m;t++)
				{
					num[t]=num[t+1];
					op[t-1]=op[t]; 
				}
			}
			if(op[i]=='/')
			{
				num[i]=num[i]/num[i+1];
				for(int t=i+1;t<=m;t++)
				{
					num[t]=num[t+1];
					op[t-1]=op[t];
				}
			}
		
			if(op[i]=='+')
			{
				num[i]=num[i]+num[i+1];
				for(int t=i+1;t<=m;t++)
				{
					num[t]=num[t+1];
					op[t-1]=op[t];
				}
			}
			if(op[i]=='-')
			{
				num[i]=num[i]-num[i+1];
				for(int t=i+1;t<=m;t++)
				{
					num[t]=num[t+1];
					op[t-1]=op[t];
				}
			}
	}
		cout<<fixed<<setprecision(2)<<num[0]<<endl; 
		for(int i=0;i<100;i++) 
		{
			num[i]=0;
			op[i]=0;
		}
		m=0;
		while(cin>>num[m]) 
		{
			ch=getchar(); 
			if(ch=='\n')break; 
			op[m]=getchar();
			m++;
		}
	}
 }
