#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    string s; cin >> s;
    ll n; cin >> n;
    if (s[0] != '1') {
        cout << s[0] << en;
        return;
    }

    for (int i = 0; i < isz(s); ++i) {
        if (s[i] == '1' && i + 1 == n) {
            cout << 1 << en;
            return;
        }
        if (s[i] != '1') {
            cout << s[i] << en; 
            return;
        }
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