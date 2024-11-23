#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int N,index=0;
 	cin>>N;
    string romanNum[4][10]={{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},//1-9
                         {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},//10-90
                         {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},//100-900
                         {"","M","MM", "MMM"}};//1000-3000                                     
                    
    string result = ""; 
    while(N>0)
 	{
        int temp=N%10;
        result=romanNum[index++][temp]+result;
        N/=10;           
    }
	cout<<result<<endl;
	return 0; 
}
