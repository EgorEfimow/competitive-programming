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
#define vpii vector<pii>

void solve() {
    string s; cin >> s;
    
    int cnt1 = 0;
    for (char &e : s) {
        if (e == '1') {
            cnt1++;
        }
    }

    if (!cnt1) {
        cout << 0 << en;
        return;
    }

    if (cnt1 == isz(s)) {
        cout << 1ll * cnt1 * cnt1 << en;
        return;
    }

    ll cnt = 1, cur = 0;

    s = s + s;

    for (int i = 0; i < isz(s); ++i) {
        if (s[i] == '1') {
            cur++;
            cnt = max(cnt, cur);
            continue;
        }
        cur = 0;
    }

    // find answer in [cnt * 1, (cnt - 1) * 2, ...]
    ll ma = -1;
    for (int i = 0; i < cnt; ++i) {
        ma = max(ma, (cnt - i) * (i + 1));
    }
    cout << ma << en;
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