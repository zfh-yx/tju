#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	int num=0;
 	for(int i=0;i<s.size()-2;i++){	
	  	if(s[i]=='t'&&s[i+1]=='j'&&s[i+2]=='u')
	   	num++;
	}
	cout<<num<<endl;
}
