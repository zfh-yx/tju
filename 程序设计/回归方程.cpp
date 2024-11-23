#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;						//数据规模
	cin >> n;
	//data[i][0]第i组数据的x，data[i][1]第i组数据的y
	vector<vector<double> >data(n, vector<double>(2, 0));
	for (int i = 0; i < n; i++)
		cin >> data[i][0] >> data[i][1];
	double sum_x = 0;
	double sum_y = 0;
	double sum_xy = 0;
	double sum_x2 = 0;
	for (int i = 0; i < n; i++)
	{
		sum_x += data[i][0];
		sum_y += data[i][1];
		sum_xy += data[i][0] * data[i][1];
		sum_x2 += data[i][0] * data[i][0];
	}
	double a, b;
	a = (sum_xy - sum_x * sum_y / n) / (sum_x2 - sum_x * sum_x / n);
	b = sum_y / n - a * sum_x / n;
	cout << a << endl << b << endl;
	return 0;
}
