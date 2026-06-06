#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int n, k; cin >> n >> k;
    multiset<int, greater<int>> mst;
    for (int i = 0; i < n; ++i) {
        int q; cin >> q;
        mst.insert(q);
    }

    for (int i = 0; i < k; i++) {
        int x; cin >> x;
        auto it = mst.lower_bound(x);
        
        if (it == mst.end()) {
            cout << -1 << en;
            continue;
        }
        cout << *it << en;
        mst.erase(it);
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