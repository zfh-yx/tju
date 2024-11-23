#include<bits/stdc++.h>
using namespace std;
	long long int  gys(long long int m ,long long int n){
		long long int i=m%n;
		if (i=0);return n;
		while(i!=0){
			if (m==0&&n==0) break;
			n=m;
			i=n;
			i=m%n;
		}
		return gys(n,i);
	};
	int main(){
		long long int m ;
		long long int n ;
		
		cin>>m>>n;
		cout<<gys(m,n);
		return 0;
	}



//先写函数，后循环 
#include<bits/stdc++.h>
using namespace std;
long long int gys(long long int a,long long int b){
	 long long int temp=a%b;
 	if(temp==0) 
 		return b;
 	else
 		return gys(b,temp);
	}
int main(){
 	long long n,m;
 	cin>>n>>m;
	 while(1){
  		if(n==0&&m==0) break;
  		else cout<<gys(m,n)<<endl;
  	cin>>m>>n;
 	}
 return 0;
}
