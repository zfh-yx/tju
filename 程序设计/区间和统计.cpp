#include <bits/stdc++.h>
 
using namespace std;

int main(){
	int T;
	cin>>T;
	int sum=0;
	for(int i=0;i<T;i++){
		int n,p;
		cin>>n>>p;
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		int num=0;
		for(int x=0;x<n;x++){
			for(int y=x;y<n;y++){
				sum+=a[y];
				if(sum==p)
				num++;
			}
			sum=0;
		}
		cout<<num<<endl;
	}
}
