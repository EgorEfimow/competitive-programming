#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int k, n;
    cin >> k >> n;
    int ans = 1e9;
    vector<int> v(n);
    vector<int> q(2*n);

    for (int &e : v) cin >> e;

    for (int i = 0; i < n; ++i) q[i] = v[i];
    for (int i = n; i < 2*n; ++i) q[i] = k + q[i % n];

    
    for (int i = 0, r = n - 1; i < n; ++i, ++r) {
        ans = min(ans, q[r] - q[i]);
    }

    // for (int i = 1; i < isz(d); ++i) {
    //     d[i - 1] = v[i] - v[i - 1];
    //     sum += d[i - 1];
    // }

    // ans = sum;

    // // ring 
    // d[isz(d) - 1] = k - v[isz(v) - 1] + v[0];

    // int r = n;
    // for (int i = 1; i < n; ++i) {
    //     sum = d[(r - 1) % n] - d[i - 1] + d[i];  
    //     ans = min(ans, sum);
    //     r++;
    // }



    cout << abs(ans) << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}