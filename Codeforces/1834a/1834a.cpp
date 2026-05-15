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
    vi v(n);
    int s = 0, cnt = 0;
    for (int &e : v) {
        cin >> e;
        s += e;
        if (e < 0) cnt++;
    }
    if (s >= 0 && cnt % 2 == 0) {
        cout << 0 << en;
        return;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] >= 0) continue;
        ans++;
        v[i] = 1;
        cnt--;
        s += 2;
        if (s >= 0 && cnt % 2 == 0) {
            cout << ans << en;
            return;
        }
    }
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