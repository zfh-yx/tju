#include<bits/stdc++.h>
using namespace std;

int num[21],mark[21],n;
int primenum[12]={2,3,5,7,11,13,17,19,23,29,31,37};
//�ж��Ƿ����������Ƿ���1�����Ƿ���0
bool prime(int a)
{
    for(int i=2;i<=a/i;i++)
    {
    	if(a%i==0)return false;
	}
    return true;
}
//pre��ջ��Ԫ�أ�post��ջ��Ԫ�أ�flag �ǽ�Ҫ�� circle ������
int dfs(int pre,int post,int flag)
{
    //ǰ + ���������������򷵻� 0
    if(!prime(pre+post)) return 0;
	//��ʱ pre + post ������
    num[flag]=post;
    	//�ɹ�����ӡ������
    if(flag==n&&prime(post+1))
    {
		for(int i=1;i<n;i++)
		{
		    cout<<num[i]<<" ";
		}
		cout<<num[n]<<endl;
		return 1;
    }
	    //ʹ�ù���������־ͱ��Ϊ0
	mark[post]=0;
	    //��ûʹ�õĵ�һ���������ѣ������� 0 ��Ȼ�� break
	for(int i=2;i<=n;i++)
	{
	    if(mark[i]!=0&&dfs(post,i,flag+1))break;
	}
	    //���λ�ָ�ԭ״
	mark[post]=1;
	    //����ʧ�ܣ�Ҫ��ջ�ˣ�
	return 0;
}
int main()
{
    int count=1;
    while(cin>>n)
    {
        //mark �Ǳ�ǣ����ûʹ�þ���������ʹ���˾���0
        for(int i=1;i<=n;i++)
        {
        	mark[i] = i;
		}
        //��һ������1
        num[1]=1;
        cout<<"Case "<<count<<":"<<endl;
        if(n==1)  cout<<1<<endl;
        //�ӵڶ������� n ����ÿһ��������һ��
        for(int i=2;i<=n;i++)
        {
        	dfs(1,i,2);
		}
        cout<<endl;
		count++;
    }
    return 0;
}
