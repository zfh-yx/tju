#include<bits/stdc++.h>
using namespace std;
//�����Լ�� 
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
        //��С������ = ����֮���������Լ��
        cout << a * b / f(a, b) << endl;
    }
    return 0;
}
