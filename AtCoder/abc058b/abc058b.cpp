#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s, q; cin >> s >> q;

    for (int i = 0; i < isz(s) - 1; ++i) {
        cout << s[i] << q[i];
    }

    if ((isz(s) - isz(q)) == 1) cout << s.back() << en;
    else cout << s.back() << q.back();
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