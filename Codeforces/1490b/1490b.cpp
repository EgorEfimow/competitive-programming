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
    int n; cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; ++i) {
        int q; cin >> q;
        mp[q % 3]++;
    }

    int ans = 0;
    for (int i = 0; i < 3 * n; ++i) {
        int pos = i % 3;
        if (mp[pos] == n / 3) continue;
        if (mp[pos] > n / 3) {
            ans += mp[pos] - (n / 3);
            mp[(i + 1) % 3] += mp[pos] - n / 3;
            mp[pos] = n / 3;
        }
    }
    cout << ans << en;
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