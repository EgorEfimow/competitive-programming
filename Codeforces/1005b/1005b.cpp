#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    string s, q; cin >> s >> q;

    int ans = isz(s) + isz(q);

    for (int i = 0; i < min(isz(s), isz(q));++i) {
        if (s[isz(s) - 1 - i] == q[isz(q) - 1 - i]) ans -= 2;
        else break;
    }

    cout << ans << en;
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