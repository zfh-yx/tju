#include<bits/stdc++.h>

using namespace std;

int main(){
	int T; cin>>T;
	for(int i=0;i<T;i++){
		int N;cin>>N;
		int a[7];
		int m[7]={1,2,5,10,20,50,100}; 
		for(int j=0;j<7;j++){
			cin>>a[j];
		}//���벻ֽͬ�ҵ����� 
		int num=0;int b;
		for(int j=6;j>=0;j--){
			b=N/m[j];
			if(b<=a[j]){
				num+=b;
				N-=m[j]*b;
			}//��ֵ�Ӵ�С�� 
			else{
				num+=a[j];
				N-=a[j]*m[j];
			}
		}
		if(N==0) cout<<num<<endl;//���������� 
		else cout<<"-1"<<endl;//�Ҳ��� 
	}
	return 0;
}
