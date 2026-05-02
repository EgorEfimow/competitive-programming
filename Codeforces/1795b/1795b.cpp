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

    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int l, r; cin >> l >> r;
        if (l > k || r < k) continue;
        for (int j = l; j <= r; ++j)
            mp[j]++;
    }
    int ma = max_element(all(mp), [&](auto l, auto r) {
        return l.second < r.second;
    })->second;

    int cnt = 0;
    for (auto &[k, v] : mp) {
        if (v == ma) cnt++;
    }

    if (mp[k] == ma && cnt == 1)
        cout << "yes" << en;
    else
        cout << "no" << en;
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