#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    int m = 0, mp = 0;
    for (int &e : v) {
        cin >> e;
        if (e >= m) {
            mp = m;
            m = max(m, e);
        }
        else 
            mp = max(mp, e);
    }
    for (int &e : v) {
        if (e == m) cout << mp << en;
        else cout << m << en;
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