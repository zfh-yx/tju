#include<bits/stdc++.h>
using namespace std;
char str[100]; //����ַ���
int x=0; //char �����±�
typedef struct node //���
{
	char c; //��ĸ
	struct node *lchild, *rchild; //���ӡ��Һ���ָ��
}TNode, *Tree;
void Creat(Tree &T)
{
	if(str[x]=='#') //����
	{
		x++;
		T=NULL;
		return;
	}
	T=(TNode*)malloc(sizeof(TNode)); //�����ڴ�ռ�
	T->c=str[x++];
	T->lchild=NULL;
	T->rchild=NULL;
	Creat(T->lchild);
	Creat(T->rchild);
	return;
}
void print(Tree T) //������������
{
	if(T==NULL)return;
	print(T->lchild);
	cout<<T->c<<" ";
	print(T->rchild);
}
int main()
{
	while(cin>>str)
	{
		x=0; //����ÿ��������ʼ�� x
		Tree T; //T=Creat()
		Creat(T);
		print(T);
		cout<<endl;
	}
	return 0;
}

