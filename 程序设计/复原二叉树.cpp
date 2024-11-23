#include<bits/stdc++.h>
using namespace std;
typedef char TElemType;
typedef struct BiTNode
{
	TElemType data; //���������
	struct BiTNode *lchild, *rchild; //���Һ���ָ��
}BiTNode,*BiTree;
//�����������к��������л�ԭ�� t
void BuildTree(BiTree& t, char pre[], int pre_low, char mid[], int mid_low,
int len)
{
	t=new BiTNode;
	if(t)
	{
		if(len<=0)
		{
			t=NULL;
			return;
		}
		t->data=pre[pre_low];
		int i=0;
		while(mid[mid_low+i]!=t->data)
		i++;
		BuildTree(t->lchild,pre,pre_low+1,mid,mid_low,i);
		BuildTree(t->rchild,pre,pre_low+i+1,mid,mid_low+i+1,len-(i+1));
	}
	return;
}
void post(BiTree t) //�������
{
	if(t)
	{
		post(t->lchild);//��������
		post(t->rchild);//�����Һ���
		cout<<t->data ;
	}
}
int main()
{
	char pre[26],mid[26];
	BiTree t=NULL;
	while(cin>>pre)
	{
		cin>>mid;
		BuildTree(t,pre,0,mid,0,strlen(mid));
		post(t);
		cout<<endl;
	}
}

