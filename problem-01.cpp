//https://codeforces.com/contest/2167/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        string m,s;
        cin>>n>>m>>s;
         sort(m.begin(), m.end()); 
         sort(s.begin(), s.end());
        if(m==s){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
