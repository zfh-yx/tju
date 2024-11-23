#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v[n];
	int m;
	cin>>m;
	for(int i = 1;i <= m;i++){
		int k;
		cin>>k;
		if(k == 0){
			int a,b;
			cin>>a>>b;
			v[a].push_back(b);
		}
		else if(k == 1){
			int a;
			cin>>a;
			for(int i=0;i<v[a].size();i++)	
			cout<<v[a][i]<<" ";
			cout<<endl;
		}
		else if(k == 2){
			int a;
			cin>>a;
			while(!v[a].empty())
			v[a].pop_back();
		}
	}
	return 0;
} 
