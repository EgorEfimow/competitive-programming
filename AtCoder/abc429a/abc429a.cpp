#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        if (i < m) cout << "OK" << en;
        else cout << "Too Many Requests" << en;
    }
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