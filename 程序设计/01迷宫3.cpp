#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,sum;
const int MAX = 400; 
int a[MAX][MAX];
char ch[MAX][MAX];
int judge[MAX][MAX];
int ori_x[MAX][MAX]={0};
int ori_y[MAX][MAX]={0};
int cur_x, cur_y;
void dfs(int x, int y)
{
    int direction_x[4]={1,-1,0,0,},direction_y[4]={0,0,1,-1};//��������
 	int i;   
    if(x>n||x<1||y>n||y<1)//������ֹ����
        return;
    if(judge[x][y]==-1)
    {
    	ori_x[x][y]=cur_x;//��������x
    	ori_y[x][y]=cur_y;//��������y
    	judge[x][y]=0;//��ǵ�ǰ��
    
    	for(i=0;i<4;i++)
    	{
        	if(a[x+direction_x[i]][y+direction_y[i]]!=a[x][y])//�뵱ǰ���겻��ʱ
           		dfs(x+direction_x[i],y+direction_y[i]);//��һ������
    	}
		sum++;//����+1
	}
}
 
int main()
{
    cin>>n>>m;//�����Թ���Сn��ѯ�ʴ���m
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {   
            cin>>ch[i][j];
            a[i][j]=ch[i][j]-'0';//char����ת����int���� 
			judge[i][j]=-1;
        }
    }
    
    for(int i=1;i<=m;i++)
    {
        
        cin>>x>>y;//����ѯ�ʴ𰸵�����
        
        if(judge[ori_x[x][y]][ori_y[x][y]]>0)//�жϵ�ǰ���ǲ�����ǰ�������� 
        {
            cout<<judge[ori_x[x][y]][ori_y[x][y]]<<endl;
            continue;
        }
        cur_x=x;//��¼��ǰ������x
        cur_y=y;//��¼��ǰ������y
        dfs(x,y);//��ʼ����
        cout<<sum<<endl;
        judge[x][y]=sum;//��¼��ǰ���裬�����ж�
        ori_x[x][y]=x;
        ori_y[x][y]=y;
		sum=0;//��������
    }
 
    return 0;
}
