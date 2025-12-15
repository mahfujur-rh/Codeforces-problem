//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ara [101][101];
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>ara[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=m; j>=1; j--)
        {
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

