#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin>>N;
	for(int j=0;j<N;j++){ //ѭ��ÿ������ 
		int n;
		cin>>n;
		int arr[5000]; //������ÿһ��ʿ�� 
		for(int i=0;i<5000;i++){
			arr[i]=1; //��ÿ��ʿ����ʼ��
		}
		int num=n; 
		while(num > 3){
			for(int i=0,a=0;i<n;i++){
				if(arr[i]==1){
					a++;//���� 
					if(a%2==0) //2�ı�����Ϊ����3��ʿ�� 
					{
						arr[i]=-1;//������� 
						num--; //ʣ������
					}
				}
			}//2���� 
			if(num<=3) break;
			
			for(int i=0,a=0;i<n;i++){
				if(arr[i]==1){
					a++;
					if(a%3==0) 
					{
						arr[i]=-1;
						num--; 
					}
				}
			}//3���� 
			if(num<=3) break;//����С�� 3 ����ѭ��
		}
		for(int i=0;i<n;i++){
			if(arr[i]==1)
			cout<<i+1<<" ";//���ʣ�µ�ʿ������� 
		}
		cout<<endl;
	}
	return 0;
}
