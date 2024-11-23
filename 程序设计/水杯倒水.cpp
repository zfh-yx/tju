#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	int sum=0; 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	for(int j=0;j<k+1;j++){
		sum+=a[j];
	}
	cout<<sum; 
}
