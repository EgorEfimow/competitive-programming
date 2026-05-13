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
    int k, n; cin >> k >> n;
    vi v(n);
    iota(all(v), 1);

    set<int> base;
    int init = 1, step = 0;
    while (init + step < n) {
        base.insert(init + step);
        init = init + step;
        step++;
    }
    
    if (k <= isz(base)) {
        int cnt = 0;
        for (auto it = base.begin(); it != base.end(); ++it) {
            if (cnt == k) break;

            cout << *it << " ";
            cnt++;
        }
        cout << en;
        return;
    }

    int cnt = 0, cur = 0;
    while (cnt < n - k) {
        if (base.find(v[cur]) != base.end()) {
            cur++;
            continue;
        }
        v.erase(v.begin() + cur);
        cnt++;
    }   

    for (int &e : v) cout << e << " ";
    cout << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}