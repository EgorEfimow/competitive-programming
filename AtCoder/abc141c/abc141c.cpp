#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> v(n, k);

    for (int i = 0; i < q; ++i) {
        int r; cin >> r;
        v[r - 1]--;
    }

    for (int &e : v) {
        int dmg = q - (k - e);
        if (dmg >= k) cout << "No" << en;
        else cout << "Yes" << en;
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