#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n, m, x;
    cin >> n >> m >> x;

    set<int> s;
    for (int i = 0; i < m; ++i) {
        int val;
        cin >> val;
        s.insert(val - 1);
    }

    int cntl = 0, cntr = 0;
    for (int i = 0; i < n; ++i) {
        if (find(all(s), i) != s.end() && i < x - 1) cntl++;
        else if (find(all(s), i) != s.end() && i > x - 1) cntr++;
    }
    cout << min(cntr, cntl) << en;
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