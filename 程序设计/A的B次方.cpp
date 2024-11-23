#include<bits/stdc++.h>
using namespace std;
int AB(int a, int b)
{
	int pow = 1;
	while(b != 0)
	{
		if(b % 2 == 1)
		{
			pow *= a;
			pow %= 1000;
		}
		b /= 2;
		a *= a;
		a %= 1000;
	}
	return pow ;
}
int main()
{
	int a, b ;
	while(cin >> a >> b)
	{
		if(a == 0 && b == 0)
			break;
		else{
			a = a % 1000;
			b = b % 1000;
			cout << AB(a, b) << endl;
		}
	}
	return 0;
}
