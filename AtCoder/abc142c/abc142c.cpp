#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define isz(x) (int)x.size()
#define all (x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);

    for (int &e : v) cin >> e;

    for (int i = 0; i < n; ++i) {
        ans[v[i] - 1] = i + 1;
    }

    for (int &e : ans) cout << e << " ";
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