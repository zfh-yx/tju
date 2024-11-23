#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n&&n!=0){
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=abs(a[i]);
		}
		sort(b,b+n);
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<n;j++){
				if(abs(a[j])==b[i]){
					cout<<a[j]<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
} 
