#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int N;
 	int xx=0,yy=0,seconds=0;
	cin>>N;
 	for(int i=1;i<=N;i++){
		string name;
		int hp,x,y;
		cin>>name>>hp>>x>>y;
		seconds+=floor(sqrt(((double) x-xx)*((double) x-xx)+((double )y-yy)*((double)y-yy)));
		if(i<=3) 
			seconds+=ceil((double)hp/30);
		else if(i>3&&i<=8) 
			seconds+=ceil((double) hp/40);
		else seconds+=ceil((double) hp/55);
		  	xx=x;
		  	yy=y;
 	}
 	cout<<seconds<<endl;
	 return 0;
}
