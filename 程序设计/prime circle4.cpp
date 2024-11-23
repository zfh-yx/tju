#include<bits/stdc++.h>
using namespace std;

int num[21],mark[21],n;
int primenum[12]={2,3,5,7,11,13,17,19,23,29,31,37};
//判断是否是质数，是返回1，不是返回0
bool prime(int a)
{
    for(int i=2;i<=a/i;i++)
    {
    	if(a%i==0)return false;
	}
    return true;
}
//pre是栈顶元素，post是栈外元素，flag 是将要进 circle 的数量
int dfs(int pre,int post,int flag)
{
    //前 + 后若不是素数，则返回 0
    if(!prime(pre+post)) return 0;
	//此时 pre + post 是素数
    num[flag]=post;
    	//成功，打印，返回
    if(flag==n&&prime(post+1))
    {
		for(int i=1;i<n;i++)
		{
		    cout<<num[i]<<" ";
		}
		cout<<num[n]<<endl;
		return 1;
    }
	    //使用过了这个数字就标记为0
	mark[post]=0;
	    //对没使用的第一个进行深搜（不返回 0 ）然后 break
	for(int i=2;i<=n;i++)
	{
	    if(mark[i]!=0&&dfs(post,i,flag+1))break;
	}
	    //标记位恢复原状
	mark[post]=1;
	    //深搜失败（要出栈了）
	return 0;
}
int main()
{
    int count=1;
    while(cin>>n)
    {
        //mark 是标记，如果没使用就是它本身，使用了就是0
        for(int i=1;i<=n;i++)
        {
        	mark[i] = i;
		}
        //第一个等于1
        num[1]=1;
        cout<<"Case "<<count<<":"<<endl;
        if(n==1)  cout<<1<<endl;
        //从第二个到第 n 个，每一个都深搜一次
        for(int i=2;i<=n;i++)
        {
        	dfs(1,i,2);
		}
        cout<<endl;
		count++;
    }
    return 0;
}
