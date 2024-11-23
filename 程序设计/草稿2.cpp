#include<bits/stdc++.h>
using namespace std;
const int N=10086;
int maxn=0;
int st[N],ed[N],ne[N],ind=0,val[N],rd[N],cd[N]; 
int st2[N],ed2[N],ne2[N]; //记录反图中每个点的起点，终点和下标
void add(int x,int y,int z){
    ed[++ind]=y; //存储终点
    ne[ind]=st[x]; //记录起点对应的前一个边的下标
    st[x]=ind; //更新起点对应的边的下标
    ed2[ind]=x; //存储起点
    ne2[ind]=st2[y]; //记录下标
    st2[y]=ind; //更新下标
    rd[y]++;cd[x]++; //更新
    val[ind]=z; //更新边权值
};
void tp(int *tpa,int *s,int *e,int *n,int *d){ //拓扑排序
    queue<int>q;int id=0; //记录拓扑排序序列中的下标
    for(int i=1;i<=maxn;i++)if(d[i]==0) q.push(i); //先把入度为0的点加入队列q
    while(!q.empty()){ //当队列q不为空时，循环执行拓扑排序
        int o=q.front();q.pop(); //o表示当前可访问的入度为0的点，出队列
        tpa[++id]=o; //把o加入拓扑排序序列
        o=s[o]; //o更新为相邻的下一条边的终点
        while(o){
            int nenum=e[o]; //nenum表示当前边对应的下一个点的编号
            d[nenum]--; 
            if(d[nenum]==0) q.push(nenum); 
            o=n[o]; //o更新为相邻的下一条边的终点对应的下标
        }
    }
}
int ztp[N],ntp[N]; //存储正向拓扑排序和反向拓扑排序的结果
int pe[N],pl[N],e[N],l[N]; 
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y,z;cin>>x>>y>>z;add(x,y,z); //读入图的信息，建图
        maxn=max(maxn,max(x,y)); //更新maxn，表示图中最大的编号
    }   
    tp(ztp,st,ed,ne,rd); //正向拓扑排序
    tp(ntp,st2,ed2,ne2,cd); //反向拓扑排序
    for(int i=1;i<=maxn;i++){
        int num=ztp[i]; //表示当节点编号
        int o=st2[num]; 
        while(o){ //查找当前节点的所有前驱中最早开始时间，即pe
            int nenum=ed2[o]; //nenum表示当前边在反向图中的起点的编号
            pe[num]=max(pe[num],pe[nenum]+val[o]); //更新当前节点的最早时间
            o=ne2[o]; //更新o
        }
    }
    for(int i=1;i<=maxn;i++) pl[i]=0xffffff; //初始化数组
    pl[maxn]=pe[maxn]; 
    for(int i=1;i<=maxn;i++){
        int num=ntp[i]; //num表示当前拓扑排序中的第i个节点编号
        int o=st[num]; //表示下标
        while(o){ //查找当前节点的最迟开始时间，即pl
            int nenum=ed[o]; //nenum表示当前边在正向图中的终点的编号
            pl[num]=min(pl[num],pl[nenum]-val[o]); //更新当前节点的最迟时间
            o=ne[o]; //更新o，准备查找下一个后继节点
        }
    }
    for(int i=1;i<=m;i++){
        e[i]=pe[ed2[i]]; //计算每条边的最早时间
        l[i]=pl[ed[i]]-val[i]; //计算每条边的最迟时间
    }
    for(int i=1;i<=m;i++){
        if(l[i]==e[i]){ 
            cout<<ed2[i]<<"   "<<ed[i]<<endl; //输出结果 
        }
    }
}
