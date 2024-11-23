#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+5;
char str[maxn],ptr[maxn];
int Next[maxn];
int slen,plen;
//����Ӵ���ģ�崮�г����˼��Σ����ص� 

void gtnext()
{
	int k=-1;
	int j=0;
	while(j<plen)
	{
		if(k==-1||ptr[j]==ptr[k])
		{
			j++;k++;
			if(ptr[j]!=ptr[k])//�Ż�next��ʹkmp���ӿ�һ�� 
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
			j=Next[j];//���һ��ƥ�䣬��j�ƶ������ǰ׺����ʡ�Բ���Ҫ�Ĳ��� 
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
		cin>>ptr>>str;//�Ӵ����� 
		slen=strlen(str);
		plen=strlen(ptr);
		Next[0]=-1;
		gtnext();
		cout<<kmp()<<endl;	
	}
}
