#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int>v;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		if(k==0){
			int a;
			cin>>a;
			v.push_back(a);
		}
		else if(k==1){
			int a;
			cin>>a;
			cout<<v[a]<<endl;
		}
		else if(k==2){
			v.pop_back();
		}
	}
}

