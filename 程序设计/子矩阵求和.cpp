#include <bits/stdc++.h>
 
using namespace std;

int a[1000][1000], s[1000][1000];

int main(){
    int M,N,Q; 
    cin>>M>>N>>Q;
    
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>a[i][j];
        }
    }
    int x1, y1, x2, y2,sum=0;
    for(int k=0;k<Q;k++){
    	cin>>x1>>y1>>x2>>y2;
    	int maxx=max(x1,x2);
    	int minx=min(x1,x2);
    	int maxy=max(y1,y2);
    	int miny=min(y1,y2);
    	for(int i=minx;i<=maxx;i++)
	    	{
	        	for(int j=miny;j<=maxy;j++)
	        	{
	        		sum+=a[i][j];
	        	}
	    	}
		cout<<sum<<endl;
		sum=0;
	}
    return 0;
}
