#include<bits/stdc++.h>
using namespace std;

int Bestv(int c,int *w,int *v,int n,int**m,int**b)
{
	int i,j;
	for(j=0;j<w[n];j++){
		m[n][j]=b[n][j]=0;
	}//��ʼ�����һ�е�ֵΪ0
	for(j=w[n];j<=c;j++){
		m[n][j]=v[n]; 
		b[n][j]=1;
	}//�������һ�е�ֵ
	for(i=n-1;i>=2;i--)//�ӵ����ڶ��п�ʼ����
	{
		for(j=0;j<w[i];j++){
			m[i][j]=m[i+1][j]; 
			b[i][j]=0;
		}//����ÿ���������ֵ
		for(j=w[i];j<=c;j++)
		{
			m[i][j]=m[i+1][j]; b[i][j]=0;
			if(v[i]+m[i+1][j-w[i]]>m[i][j])
			{
				m[i][j]=v[i]+m[i+1][j-w[i]];
				b[i][j]=1;
			}
		} 
	}
	//�����һ�е�ֵ
	m[1][c]=m[2][c];
	b[1][c]=0;
	if(w[1]<=c)
	{
		if(v[1]+m[2][c-w[1]]>m[1][c])
		{
			m[1][c]=v[1]+m[2][c-w[1]];b[1][c]=1;}
		}
	return m[1][c];//��������ֵ
}

//�������Ž����b���������Ž�x
void Bests(int ** b,int *w,int *x,int n,int c)
{
	int i,j;
	j=c;
	for(i=1;i<=n;i++)
	{
		x[i]=b[i][j];
		j-=x[i]*w[i];
    }
}

int main(){
	int i,c,n,*w,*p,**m,**b,*x;
	cout<<"��Ʒ����:"<<endl;
	cin>>n;
	cout<<"the knapsack capacity:"<<endl;
	cin>>c;
	w=new int[n+1]; 
	p=new int[n+1];
	cout<<"the weights of the objects:"<<endl;
	for(i=1;i<=n;i++){
		cin>>w[i];
	}
	cout<<"the profits of each object:"<<endl;
	for(i=1;i<=n;i++){
		cin>>p[i];
	}
	m=new int *[n+1]; 
	b=new int *[n+1];
	for(i=1;i<=n;i++){
		m[i]=new int[c+1]; 
		b[i]=new int[c+1];
	}
	Bestv(c, w, p, n,m, b);
	x=new int[n+1];
	Bests(b,w,x,n,c);
	cout<<"the optimal selection of weights: "<<endl;
	for(i=1;i<=n;i++){
		cout<<x[i]<<endl;
	}
	cout<<endl;
	fclose(stdin);
	return 0;
}

