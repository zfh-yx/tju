#include<bits/stdc++.h>
using namespace std;
class grade
{
	public:
	string name;//ѧ�� 
	double g1,g2,g3,g4,g5,G;
}grades[10000]; 
//�ɼ��ṹ�� 
bool range(grade a,grade b)
{
	if (a.G > b.G)
		return true;
	else if(a.G < b.G)
	  	return a.G>b.G; 
	else if(a.G==b.G)//��Ȩ��ͬʱ���ٱȽϸ��Ƴɼ� 
		{
			if(a.g1!=b.g1) return a.g1>b.g1;
			else if(a.g2!=b.g2) return a.g2>b.g2;
			else if(a.g3!=b.g3) return a.g3>b.g3;
			else if(a.g4!=b.g4) return a.g4>b.g4;
			else if(a.g5!=b.g5) return a.g5>b.g5;
		}
}
//������ɼ�����ĺ��� 
int main()
{ 	
	double p1,p2,p3,p4,p5; //ѧ�� 
	cin>>p1>>p2>>p3>>p4>>p5;
	int n; 
	cin>>n;//ѧ������ 
	for(int i=1;i<=n;i++)
	{
	  	cin>>grades[i].name>>grades[i].g1>>grades[i].g2>>grades[i].g3>>grades[i].g4>>grades[i].g5;
	}
	//������Ƴɼ� 
	for(int j=1;j<=n;j++)
	{
	  	grades[j].G=(p1*grades[j].g1+p2*grades[j].g2+p3*grades[j].g3+p4*grades[j].g4+p5*grades[j].g5)/(p1+p2+p3+p4+p5); 
	}
	//���μ����Ȩ�ɼ� 
	sort(grades+1,grades+1+n,range); //���� 
	for(int k=1;k<=n;k++)
	{
		cout<<fixed<<setprecision(2)<<grades[k].name<<" "<<grades[k].G<<endl;
	}
	//���ɸߵ������ 
	return 0;
}
