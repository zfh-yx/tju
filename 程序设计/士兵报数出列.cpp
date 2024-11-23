#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin>>N;
	for(int j=0;j<N;j++){ //循环每个组数 
		int n;
		cin>>n;
		int arr[5000]; //数组存放每一个士兵 
		for(int i=0;i<5000;i++){
			arr[i]=1; //将每个士兵初始化
		}
		int num=n; 
		while(num > 3){
			for(int i=0,a=0;i<n;i++){
				if(arr[i]==1){
					a++;//报数 
					if(a%2==0) //2的倍数即为报到3的士兵 
					{
						arr[i]=-1;//令其出列 
						num--; //剩余人数
					}
				}
			}//2出列 
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
			}//3出列 
			if(num<=3) break;//人数小于 3 不再循环
		}
		for(int i=0;i<n;i++){
			if(arr[i]==1)
			cout<<i+1<<" ";//输出剩下的士兵的序号 
		}
		cout<<endl;
	}
	return 0;
}
