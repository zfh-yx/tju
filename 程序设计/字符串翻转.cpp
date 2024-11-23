#include<bits/stdc++.h>
using namespace std;

char* str_reverse(const char* str)
{
	char* strback = new char[strlen(str)-1];
 
 	for(int i = 0;i < strlen(str);i++)
 	{
  		strback[i] = str[strlen(str)-1-i];
 	}
 
 	return strback;
} 
int main()
{
 	char str[100];
 	cin >> str;
 	cout << str_reverse(str) << endl;
 	return 0;
}
