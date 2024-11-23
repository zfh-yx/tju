#include<bits/stdc++.h>
using namespace std;
char str[100]; //存放字符串
int x=0; //char 数组下标
typedef struct node //结点
{
	char c; //字母
	struct node *lchild, *rchild; //左孩子、右孩子指针
}TNode, *Tree;
void Creat(Tree &T)
{
	if(str[x]=='#') //空树
	{
		x++;
		T=NULL;
		return;
	}
	T=(TNode*)malloc(sizeof(TNode)); //开辟内存空间
	T->c=str[x++];
	T->lchild=NULL;
	T->rchild=NULL;
	Creat(T->lchild);
	Creat(T->rchild);
	return;
}
void print(Tree T) //中序遍历并输出
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
		x=0; //对于每个样例初始化 x
		Tree T; //T=Creat()
		Creat(T);
		print(T);
		cout<<endl;
	}
	return 0;
}

