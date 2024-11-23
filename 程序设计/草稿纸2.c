#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
int read() {
 int x = 0,f = 0;char ch = getchar();
 while(!isdigit(ch)) {if(ch == '-')f = 1;ch = getchar();}
 while(isdigit(ch)) {x = x * 10 + ch - '0';ch = getchar();}
 return f ? -x : x;
}
int n,a[8],vis[8],val[8],b[8],ans;
unsigned long long A;
ll top,st1[10],st2[10];
unordered_map<unsigned long long,bool> mp;
void check() {
 st1[top = 1] = val[a[1]];
 for(int i = 2;i <= n;i++) {
  if(b[i - 1] <= 2) {
   st2[top] = b[i - 1];
   st1[++top] = val[a[i]]; 
  } 
  else {
   if(b[i - 1] == 3) st1[top] *= val[a[i]];
   if(b[i - 1] == 4) st1[top] /= val[a[i]];
  }
 } 
 for(int i = 2;i <= top;i++) {
//  cout <<"aaaaa"<< st2[i] << " ";
  if(st2[i - 1] == 1) st1[1] += st1[i];
  if(st2[i - 1] == 2) st1[1] -= st1[i];
 }
// cout << st1[1] << " " << endl;
 if(st1[1] != 24) return ;
 b[0] = 0;A = 0;
 for(int i = 1;i <= n;i++) A = A * 114 + val[a[i]] * 514 + (b[i - 1]) * 1919;
 if(mp[A]) return;
 mp[A] = 1; 
 cout << val[a[1]];
 for(int i = 2;i <= n;i++) {
  if(b[i - 1] == 1) cout <<"+";
  if(b[i - 1] == 2) cout <<"-";
  if(b[i - 1] == 3) cout <<"*";
  if(b[i - 1] == 4) cout <<"/";
  cout << val[a[i]];
 }
 ans++;
 cout<<endl;
}
void dfs(int now) {
 if(now == n) {
  for(int i = 1;i <= n;i++) {
   if(vis[i] == 0) a[now] = i;
  }
  check();
  a[now] = 0;
  return ;
 }
 for(int i = 1;i <= n;i++) {
  if(vis[i]) continue;
  vis[i] = 1;
  a[now] = i;
  for(int j = 1;j <= 4;j++) {
   b[now] = j;
   dfs(now + 1);
   b[now] = 0;
  }
  a[now] = 0;
  vis[i] = 0;
 }
}
int main() {
 n = read();
 for(int i = 1;i <= n;i++) {
  val[i] = read();
 }
 dfs(1);
 cout << ans << endl;
 return 0;
}
