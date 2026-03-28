#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int q;
    cin >> q;

    multiset<int> s;

    for (int i = 0; i < q; ++i) {
        int k, v;
        cin >> k >> v;
        if (k == 1)
            s.insert(v);
        else {
            auto it = s.upper_bound(v);
            s.erase(s.begin(), it);
        }
        cout << isz(s) << en;
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