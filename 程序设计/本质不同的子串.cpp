#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<string> ans;
	string a;
	string b;
    int n; cin>>n;//�������� 
    for(int i=0;i<n; i++)
	{
		cin>>a;
        int c=a.length();
        a+=a;
        for (int i=0; i<c; i++)
		{
            for (int j=0; j<c; j++)
			{
                b=a.substr(j+1,i+1);//��ȡ 
                ans.insert(b);//����b 
            }
        }
        cout<<ans.size()<<endl;
		ans.clear();//��� 
	} 
    return 0;
}



