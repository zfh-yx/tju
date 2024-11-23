#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int k=0;k<T;k++)
    {	
		string a;
    	cin>>a;
		int sum[4]={0};
        for(int j=0;j<4;j++)
        {
            for(int i=7;i>=0;i--)
            {
                sum[j]+=(a[i+j*8]-'0')*pow(2,7-i);
            } 
        }
        cout<<sum[0]<<"."<<sum[1]<<"."<<sum[2]<<"."<<sum[3]<<endl;
    }
  
    return 0;
}
