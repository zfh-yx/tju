#include<bits/stdc++.h>
using namespace std;

struct stu
{
	int num;
 	string name;
	int c,m,e;
}s[300];
bool range (stu a,stu b)
{
	if(a.c+a.m+a.e==b.c+b.m+b.e)
	{
		if(a.c!=b.c) return a.c>b.c;
		else
		{
			if(a.m!=b.m)
	   		return a.m>b.m;
	  		else
	  		{
	    		if(a.e!=b.e)
	     		return a.e>b.e;
	    		else  return a.num<b.num;
	   		}
		}
	}
	else
 	{
  		return a.c+a.m+a.e>b.c+b.m+b.e; 
 	}
}
int main()
{
	int n; cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i].num>>s[i].name>>s[i].c>>s[i].m>>s[i].e;
	}
	sort(s,s+n,range);
 	for(int i=0;i<5;i++)
 	{
 		cout<<s[i].num<<" "<<s[i].name<<" "<<s[i].c+s[i].m+s[i].e<<endl;
	}
	return 0;
}
