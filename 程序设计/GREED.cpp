#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;cin>>n;
	long long a[n],b[n],sum=0;
	for(int i=0;i<n;i++){
		
		cin>>a[i];
		sum+=a[i]; 
	}
	for(int i=0;i<n;i++){
		
		cin>>b[i];
	}
	sort(b,b+n);
	long long max=b[n-1]+b[n-2];
	if(sum<=max) 
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl; 
	return 0;
}
