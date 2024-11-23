#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n*(n-1)/2];
	int k=0;
		for(int i=0;i<n-1;i++){
					
			for(int j=i+1;j<n;j++){
						
				b[k]=a[i]+a[j];
				k++;
			}
		}
	sort(b,b+n*(n-1)/2);
	int num=0;
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n*(n-1)/2;j++){
			
			if((a[i]==b[j])&&(b[j]!=b[j-1]))
				num++;
		}
	}
	cout<<num;
	return 0;
}
