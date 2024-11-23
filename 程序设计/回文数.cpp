#include<bits/stdc++.h>
using namespace std;
int hws(int a,int b){
 	if(a==0) return b;
	 else 
 	return hws(a/10,b*10+a%10);
}
bool judge(int x){
 	return x==hws(x,0);
}
int main(){
	 for(int i=11;11<=i<=999;i++){
 	 if(judge(i)&&judge(i*i)&&judge(i*i*i))
  	cout<<i<<endl;
 	}
 return 0;
}
