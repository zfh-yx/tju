#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int n,wideMax=0;
	cin>>n;
	int x1=0,x2=0,y1=0,y2=0;
	int x=0,y=0; 
	int xscore=0,yscore=0,zxscore=0,sum=0;
	
 	string shape[150];
	getchar(); 
	
 	for(int i=0;i<n;i++)
 	{
		getline(cin,shape[i]); 
		if(wideMax<=shape[i].length())
		wideMax=shape[i].length();
 	}//����ͼ�� 
 	for(int j=0;j<n;j++)
 	{
  		shape[j].append(wideMax-shape[j].length(),' '); 
 	}//���Ͽո��ɳ����� 
	
 	for(int i=0;i<shape[0].length();i++)
 	{
 		int num=0;
  		for(int j=0;j<n;j++)
  		{
   			if(shape[j][i]!=' ')
   			{
			    num+=1;
			    y1=i;
			    break;
		   }
 		}
  		if(num==1) break;
 	}
 	for(int i=0;i<n;i++)
 	{
  		int num=0;
  		for(int j=0;j<shape[i].length();j++)
  		{
		   if(shape[i][j]!=' ')
		   {
			    num+=1;
			    x1=i;
			    break;
			   }
		  }
		  if(num==1)
		   break;
 	}
	for(int i=n-1;i>=0;i--)
	{
	  	int num=0;
	  	for(int j=0;j<shape[i].length();j++)
	  	{
		   if(shape[i][j]!=' ')
		   {
		    num+=1;
		    x2=i;
		    break;
		   }
	  	}
	  	if(num==1)  break;
	}
	for(int j=shape[0].length()-1;j>=0;j--)
 	{
	     int num=0;
	     for(int i=0;i<n;i++)
	     {
	        if(shape[i][j]!=' ')
			{
			    num+=1;
			    y2=j;
			    break;
			}
     	}
     	if(num==1) break;
 	}//�ж��Ƿ����x��Գ� 
 	
 	for(int i=x1;i<=(x1+x2)/2;i++)
 	{
	  	int num=0;
	  	for(int j=y1;j<=y2;j++)
	  	{
		   	if(shape[i][j]!=shape[x1+x2-i][j])
		   	{
		    num+=1;
		    break; 
		   	}
	  	}
		if(num==0) xscore=2;
		else break; 
 	}//�ж��Ƿ����y��Գ� 
 	
	for(int j=y1;j<=(y1+y2)/2;j++)
	{
		int num=0;
		for(int i=x1;i<=x2;i++)
		{
		   	if(shape[i][j]!=shape[i][y1+y2-j])
		   	{
			    num+=1;
			    break;
			}
		}
		if(num==0) yscore=1;
		else break;
	}//�ж��Ƿ����ĶԳ� 
 	
 	for(int i=x1;i<=x2;i++)
 	{
	  	int num=0;
	 	 for(int j=y1;j<=y2;j++)
	  	{
		  	if(shape[i][j]!=shape[x1+x2-i][y1+y2-j])
		   	{
		    	num+=1;
		   	 	break;
		  	}
	 	}
  		if(num==0) zxscore=3;
  		else break;
 	}
	sum= xscore+yscore+zxscore;
 	cout<<sum<<endl;//�������֮�� 
 	return 0;
}
