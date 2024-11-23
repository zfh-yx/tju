#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;cin>>N;
	int a[N];
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	int max_s=0;
    int left=0,right=N-1;
    while(left<right)
    {
        if(a[left]<=a[right])
        {
            max_s=max(max_s,(right-left)*a[left]);
            left++;
        }
        else
        {
            max_s=max(max_s,(right-left)*a[right]);
            right--;
        }
    }
    cout<<max_s;
}
