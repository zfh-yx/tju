#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,M;
	while(cin>>N>>M){
		int a[N];
		for(int i=0;i<N;i++){
			cin>>a[i];
		}
		int b[N*(N-1)/2];
		for(int k=0;k<N*(N-1)/2;k++){
			for(int i=0;i<N-1;i++){
					
				for(int j=i+1;j<N;j++){
						
					b[k]=a[i]+a[j];
					k++;
				}
			}
		}
		sort(b,b+N*(N-1)/2);
		for(int i=0;i<M;i++){
			
			cout<<b[N*(N-1)/2-i-1]<<" ";
		}
		cout<<endl;
	}
	
} 
