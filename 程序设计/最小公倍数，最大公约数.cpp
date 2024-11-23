#include<bits/stdc++.h>
using namespace std;
//求最大公约数 
int f(int a, int b)
{
    int c = a % b;
    while(c!=0)
    {
        a = b;
        b = c;
		c = a % b;
    }
    return b;
}

int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        //最小公倍数 = 两数之积除以最大公约数
        cout << a * b / f(a, b) << endl;
    }
    return 0;
}
