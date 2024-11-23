#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long

const int N = 10100;
struct Node{int x,y;}a[N],b[N];
int s[N][N];
int n,m,q;
int res[N],top;
int read()
{ 
 	int x = 0,f = 0,y = 0;
	char ch = getchar();
	char ls; 
 	while(!isdigit(ch)) 
	{
		if(ch == '-')f = 1;
			ch = getchar();
	}
	while(isdigit(ch)) 
	{
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return f ? -x : x;
}

int ask(int mxx,int mix,int miy,int mxy)
{
 	if(mxx < mix) swap(mxx,mix);
 	if(mxy < miy) swap(mxy,miy);
 	return s[mxx][mxy] - s[mix - 1][mxy] - s[mxx][miy - 1] + s[mix - 1][miy - 1];
}
int main()
{
 	n = read();
	m = read();
 	for(int i = 1;i <= n;i++)
	{
	 	b[i].x = read();
		b[i].y = read();
	 	res[++top] = b[i].x;
	  	res[++top] = b[i].y;
 	}
 	sort(res + 1,res + 1 + top);//ÅÅÐò 
 	int len = unique(res + 1,res + 1 + top) - res - 1;
	
 	for(int i = 1;i <= n;i++)
	{
	  	a[i].x = lower_bound(res + 1,res + 1 + len,b[i].x) - res;
	  	a[i].y = lower_bound(res + 1,res + 1 + len,b[i].y) - res;
 	} 
	for(int i = 1;i <= n;i++) s[a[i].x][a[i].y]++;
	for(int i = 1;i <= len;i++)
	{
  		for(int j = 1;j <= len;j++)
		{
   			s[i][j] += s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
  		}
 	}
 	for(int i = 0;i < m;i++)
	{
  		int X ,Y;
  		X = read() + 1;
		Y = read() + 1 ;
  		printf("%d\n",ask(a[X].x,a[Y].x,a[X].y,a[Y].y));  
 	}
 	return 0;
}
