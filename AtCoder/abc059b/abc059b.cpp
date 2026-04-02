#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s, q; cin >> s >> q;

    auto pad = [](string &s, int size) -> string {
        string ns("0", abs(isz(s) - size));
        return ns + s;
    };

    int len = max(isz(s), isz(q));

    s = pad(s, len);
    q = pad(q, len);

    if (s > q) cout << "GREATER" << en;
    else if (s < q) cout << "LESS" << en;
    else cout << "EQUAL" << en;
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