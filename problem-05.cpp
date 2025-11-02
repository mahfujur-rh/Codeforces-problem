//https://codeforces.com/contest/1915/problem/C

#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int arr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++) { 
            cin >> arr[i];
            sum += arr[i]; 
        }
        long long a = round(sqrt(sum * 1.0)); // round funtion use 
        if (a * a == sum) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;


    }


    return 0;

}
