#include<bits/stdc++.h>
using namespace std;
const int N=10086;
int maxn=0;
int st[N],ed[N],ne[N],ind=0,val[N],rd[N],cd[N]; 
int st2[N],ed2[N],ne2[N]; //��¼��ͼ��ÿ�������㣬�յ���±�
void add(int x,int y,int z){
    ed[++ind]=y; //�洢�յ�
    ne[ind]=st[x]; //��¼����Ӧ��ǰһ���ߵ��±�
    st[x]=ind; //��������Ӧ�ıߵ��±�
    ed2[ind]=x; //�洢���
    ne2[ind]=st2[y]; //��¼�±�
    st2[y]=ind; //�����±�
    rd[y]++;cd[x]++; //����
    val[ind]=z; //���±�Ȩֵ
};
void tp(int *tpa,int *s,int *e,int *n,int *d){ //��������
    queue<int>q;int id=0; //��¼�������������е��±�
    for(int i=1;i<=maxn;i++)if(d[i]==0) q.push(i); //�Ȱ����Ϊ0�ĵ�������q
    while(!q.empty()){ //������q��Ϊ��ʱ��ѭ��ִ����������
        int o=q.front();q.pop(); //o��ʾ��ǰ�ɷ��ʵ����Ϊ0�ĵ㣬������
        tpa[++id]=o; //��o����������������
        o=s[o]; //o����Ϊ���ڵ���һ���ߵ��յ�
        while(o){
            int nenum=e[o]; //nenum��ʾ��ǰ�߶�Ӧ����һ����ı��
            d[nenum]--; 
            if(d[nenum]==0) q.push(nenum); 
            o=n[o]; //o����Ϊ���ڵ���һ���ߵ��յ��Ӧ���±�
        }
    }
}
int ztp[N],ntp[N]; //�洢������������ͷ�����������Ľ��
int pe[N],pl[N],e[N],l[N]; 
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y,z;cin>>x>>y>>z;add(x,y,z); //����ͼ����Ϣ����ͼ
        maxn=max(maxn,max(x,y)); //����maxn����ʾͼ�����ı��
    }   
    tp(ztp,st,ed,ne,rd); //������������
    tp(ntp,st2,ed2,ne2,cd); //������������
    for(int i=1;i<=maxn;i++){
        int num=ztp[i]; //��ʾ���ڵ���
        int o=st2[num]; 
        while(o){ //���ҵ�ǰ�ڵ������ǰ�������翪ʼʱ�䣬��pe
            int nenum=ed2[o]; //nenum��ʾ��ǰ���ڷ���ͼ�е����ı��
            pe[num]=max(pe[num],pe[nenum]+val[o]); //���µ�ǰ�ڵ������ʱ��
            o=ne2[o]; //����o
        }
    }
    for(int i=1;i<=maxn;i++) pl[i]=0xffffff; //��ʼ������
    pl[maxn]=pe[maxn]; 
    for(int i=1;i<=maxn;i++){
        int num=ntp[i]; //num��ʾ��ǰ���������еĵ�i���ڵ���
        int o=st[num]; //��ʾ�±�
        while(o){ //���ҵ�ǰ�ڵ����ٿ�ʼʱ�䣬��pl
            int nenum=ed[o]; //nenum��ʾ��ǰ��������ͼ�е��յ�ı��
            pl[num]=min(pl[num],pl[nenum]-val[o]); //���µ�ǰ�ڵ�����ʱ��
            o=ne[o]; //����o��׼��������һ����̽ڵ�
        }
    }
    for(int i=1;i<=m;i++){
        e[i]=pe[ed2[i]]; //����ÿ���ߵ�����ʱ��
        l[i]=pl[ed[i]]-val[i]; //����ÿ���ߵ����ʱ��
    }
    for(int i=1;i<=m;i++){
        if(l[i]==e[i]){ 
            cout<<ed2[i]<<"   "<<ed[i]<<endl; //������ 
        }
    }
}
