#include<bits/stdc++.h>
using namespace std;
随机数
	srand((time(0));
	int num=rand()%100+1;
	
随机字符
	static_cast<char>(ch1+rand()%(ch2-ch1+1)) 
	
三目运算符
	int a=10;
	int b=20;
	int c=0;
	c(a>b?a:b); //前为真，则1，假则2

设置浮点数精度
	fixed<<setprecition(n)
	showpoint//以0不足位数
	
输入
	//cin不能输入空格
	//cin.getline(cin,s)  输入字符串 
