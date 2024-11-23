#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;cin>>m;

	for(int i=0;i<m;i++){
		int n;cin>>n;
		int a[n];
		for(int j=0;j<n;j++){
			
			cin>>a[j];
		}
		for(int k=0;k<n;k++){
			int min=a[k];
			for(int j=k+1;j<n+1;j++){
				if(a[k]>a[j])
					swap(a[k],a[j]);
			}
		}
		for(int j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
	}

return 0;
} 
