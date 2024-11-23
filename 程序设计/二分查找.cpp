#include<bits/stdc++.h>
using namespace std;
int low,high,mid,key,ST[11];

int Search_Bin(int ST[],int key){
	low=1; high=11;
	while(low<=high){
		mid=(low+high)/2;
		if(ST[mid]==key) return mid;
		else if(key<ST[mid])
			high=mid-1;
		else low=mid+1;
	}
	return 0;
}
int main(){
	while(cin>>key){
		for(int i=1;i<=11;i++){
    		cin>>ST[i];
		}
		cout<<Search_Bin(ST, key);
	}
}
   
