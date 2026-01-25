
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
#include <bits/stdc++.h>
using namespace std;

int main() {
	int ara[101][101];
	int m,s;
	cin>>m>>s;
	for(int row=1;row<=m;row++){
	    for(int col=1;col<=s;col++){
	        cin>>ara[row][col];
	    }
	}
	for(int row=1;row<=m;row++){
	    for(int col=s;col>=1;col--){
	        cout<<ara[row][col]<<" ";
	    }
	    cout << endl;
	}

}

