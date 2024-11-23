#include<bits/stdc++.h>
using namespace std;

const int INF=0x3f3f3f3f;
const int dx[4]={-1,0,1,0}; //���������ĸ�����
const int dy[4]={0,1,0,-1};
char grid[205][205];
int dis[205][205][2]; //dis[i][j][k]��ʾ��(i,j)��k���˵���̾���
struct Node 
{
	int x,y;
	int idx; //idx��ʾ���ĸ��ˣ�0��ʾYifenfei��1��ʾMerceki��
	Node(int _x,int _y,int _idx):x(_x),y(_y),idx(_idx){}
};

int bfs(int n,int m,int sx,int sy,int tx,int ty);

void search(int nums[], int size, int target)
{
	
    int left = 0;
    int right = size - 1;	
    while (left <= right) {	
        int middle = left + ((right - left) / 2);
        if (nums[middle] > target) {
            right = middle - 1;	
        } else if (nums[middle] < target) {
            left = middle + 1;	
        } else {
            return;
        }
    }
    //û���ҵ�Ŀ��ֵ
    return ;
} 
int BinarySearch(int *array, int aSize, int key)  
{  
    if ( array == NULL || aSize == 0 )  
        return -1;  
    int low = 0;  
    int high = aSize - 1;  
    int mid = 0;  
  
    while ( low <= high )  
    {  
        mid = (low + high )/2;  
          
        if ( array[mid] < key)  
            low = mid + 1;  
        else if ( array[mid] > key )     
            high = mid - 1;  
        else  
            return mid;  
    }  
    return -1;  
} 
int main() 
{
	int n,m;
	while(cin>>n>>m) 
	{
		int sx,sy;
		int tx,ty;
		for(int i=0;i<n;i++) 
		{
			for(int j=0;j<m;j++) 
			{
				cin>>grid[i][j];
			}
		}
		for(int i=0;i<n;i++) 
		{
			for(int j=0;j<m;j++) 
			{
				if(grid[i][j]=='M') 
				{
					tx=i;ty=j;
				} 
			}
		}
		for(int i=0;i<n;i++) 
		{
			for(int j=0;j<m;j++) 
			{
				if(grid[i][j]=='Y') 
				{
					sx=i;sy=j;
				}
				search(0,0,0);
			}
		} 
		cout<<bfs(n,m,sx,sy,tx,ty)<<endl;
	}
	return 0;
}
int bfs(int n,int m,int sx,int sy,int tx,int ty) 
{
	memset(dis,INF,sizeof(dis)); //��ʼ����������
	dis[sx][sy][0]=dis[tx][ty][1]=0; //������Ϊ0
	queue<Node>q;
	q.push(Node(sx,sy,0));
	q.push(Node(tx,ty,1));
	while(!q.empty()) 
	{
		Node cur=q.front();q.pop();
		int x=cur.x,y=cur.y,idx=cur.idx;
		for(int i=0;i<4;i++) // ö���ĸ�����
		{ 
			int nx=x+dx[i],ny=y+dy[i];
			if(nx<0||nx>=n||ny<0||ny>=m||grid[nx][ny]=='#') continue;
			if(dis[nx][ny][idx]!=INF) continue; // �Ѿ����¹��ˣ�����Ҫ�ٴθ���
			dis[nx][ny][idx]=dis[x][y][idx]+11; // ���¾���
			q.push(Node(nx,ny,idx));
		}
	}
	int ans=INF;
	for (int i=0;i<n;i++) 
	{
		for (int j=0;j<m;j++) 
		{
			if (grid[i][j]=='@') //ö������KFC��λ��
			{ 
				ans=min(ans,dis[i][j][0]+dis[i][j][1]); // ���㵽���KFC���ܾ���
			}
		}
	}
	return ans;
}
