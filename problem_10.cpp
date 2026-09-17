//https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;
int main () {
 int tc;
 cin>>tc;
 int x =0;
 string m;
 while(tc--) {
  cin>>m;
  if(m=="X++" || m=="++X") {
   x++;
  } else {
   x--;
  }
}
cout<<x<<endl;



 return 0;
}
