#include <bits/stdc++.h>
using namespace std;
 
int a[200],b[200],c[222];
int x=0,jw=0;
 
int main() {
	string s1,s2;
	cin>>s1>>s2;//�����ַ��� 
 
	for(int i=0; i<s1.length(); i++) {
		a[i]=s1[s1.length()-i-1]-'0';
	}
	for(int i=0; i<s2.length(); i++) {
		b[i]=s2[s2.length()-i-1]-'0';
	}//��ÿλ���ִ������� 
 
	while(x<s1.length()||x<s2.length()) {
		c[x]=a[x]+b[x]+jw;
		jw=c[x]/10;
		c[x]%=10;
		x++;
	}//��λ 
	c[x]=jw;
 
	if(c[x]!=0) cout<<c[x];
	for(int i=x-1; i>=0; i--) {
		cout<<c[i];
	}//������ 
 
	return 0;
}
