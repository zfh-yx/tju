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
    int direction_x[4]={1,-1,0,0,},direction_y[4]={0,0,1,-1};//方向坐标
 	int i;   
    if(x>n||x<1||y>n||y<1)//搜索终止条件
        return;
    if(judge[x][y]==-1)
    {
    	ori_x[x][y]=cur_x;//更改坐标x
    	ori_y[x][y]=cur_y;//更改坐标y
    	judge[x][y]=0;//标记当前点
    
    	for(i=0;i<4;i++)
    	{
        	if(a[x+direction_x[i]][y+direction_y[i]]!=a[x][y])//与当前坐标不符时
           		dfs(x+direction_x[i],y+direction_y[i]);//进一步搜索
    	}
		sum++;//步数+1
	}
}
 
int main()
{
    cin>>n>>m;//输入迷宫大小n与询问答案数m
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {   
            cin>>ch[i][j];
            a[i][j]=ch[i][j]-'0';//char数组转换成int数组 
			judge[i][j]=-1;
        }
    }
    
    for(int i=1;i<=m;i++)
    {
        
        cin>>x>>y;//输入询问答案的坐标
        
        if(judge[ori_x[x][y]][ori_y[x][y]]>0)//判断当前点是不是以前搜索过的 
        {
            cout<<judge[ori_x[x][y]][ori_y[x][y]]<<endl;
            continue;
        }
        cur_x=x;//记录当前点坐标x
        cur_y=y;//记录当前点坐标y
        dfs(x,y);//开始搜索
        cout<<sum<<endl;
        judge[x][y]=sum;//记录当前步骤，用于判断
        ori_x[x][y]=x;
        ori_y[x][y]=y;
		sum=0;//步数清零
    }
 
    return 0;
}
