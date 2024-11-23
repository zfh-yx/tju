#include<bits/stdc++.h>
using namespace std;

char* cat_fun(const char* stra,const char* strb)
{
 char* strc = new char[strlen(stra)+strlen(strb)];
 //输出前半截 
 for(int i = 0;i < strlen(stra);i++)
 {
  strc[i] = stra[i];
 }
 //输出后半截 
 for(int i = strlen(stra);i < strlen(stra)+strlen(strb);i++)
 {
  strc[i] = strb[i - strlen(stra)];
 }
 
 return strc;
} 
int main()
{
 char stra[20], strb[20];
 cin >> stra >> strb;
 cout << cat_fun(stra, strb) << endl;
 return 0;
}
