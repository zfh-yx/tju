#include<bits/std.c++>
using namespace std;
int main()
{
	int n;
	cin>>n;
		deque<int>dq;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a==0)
		{
			int b,c;
			cin>>b>>c;
			if(b==0) dq.push_front(c);
			else if(b==1) dq.push_back(c);
		}
		else if(a==1)
		{
			int b;
			cin>>b;
			cout<<dq[b]<<endl;
		}
		else if(a==2)
		{
			int b;
			cin>>b;
			if(b==0) dq.pop_front();
			else if(b==1) dq.pop_back();
		}
	}
	
	return 0;
	
}
