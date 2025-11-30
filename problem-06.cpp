//// https://codeforces.com/problemset/problem/1676/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;cin>>tc;
    while(tc--){    //string char
        char a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
        int sum1 =a+b+c;
        int sum2 =d+e+f;
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    
    return 0;
}
//inshaallah next jan ttaki codeforce active thakmu..
