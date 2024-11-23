#include<bits/stdc++.h>
using namespace std;
bool hws(string str){
	if(str.length()<2) return true;
	else
	return str[0]==str[str.length()-1]&&hws(str.substr(1,str.length()-2));
}
string ejz(int x) {
	string s = ""; 
	while(x){
		if(x % 2 == 0) s = '0' + s;
		else s = '1' + s;
		x/= 2;
	}
	return s;
}
int main(){
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
		int n;
		cin>>n;
		if(hws(ejz(n))) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
