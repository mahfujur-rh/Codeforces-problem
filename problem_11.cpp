
//https://codeforces.com/problemset/problem/158/A
#include <bits/stdc++.h>
using namespace std;
int main () {
   int s[100];
   int n,k;
   cin>>n>>k;
   for(int i=0;i<n;i++) {
      cin>>s[i];
   }
   int count=0;
   for(int i=0;i<n;i++) {
      if(s[i]>=s[k-1] && s[i]>0) {
         count++;
      }
   }
   cout<<count<<endl;

 return 0;
}
