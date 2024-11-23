#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+5;
char str[maxn],ptr[maxn];
int Next[maxn];
int slen,plen;
//输出子串在模板串中出现了几次，可重叠 

void gtnext()
{
	int k=-1;
	int j=0;
	while(j<plen)
	{
		if(k==-1||ptr[j]==ptr[k])
		{
			j++;k++;
			if(ptr[j]!=ptr[k])//优化next，使kmp更加快一点 
				Next[j]=k;
			else Next[j]=Next[k];
		}
		else k=Next[k];
	}
	return ;
}

int kmp()
{
	int cnt=0;
	int i=0,j=0;
	while(i<slen)
	{
		if(j==-1||str[i]==ptr[j])
		{
			i++;j++;
		}
		else j=Next[j];
		if(j==plen)
		{
			cnt++;
			j=Next[j];//完成一次匹配，将j移动到最长的前缀处，省略不必要的查找 
		}
	}
	return cnt; 
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		cin>>ptr>>str;//子串在上 
		slen=strlen(str);
		plen=strlen(ptr);
		Next[0]=-1;
		gtnext();
		cout<<kmp()<<endl;	
	}
}
