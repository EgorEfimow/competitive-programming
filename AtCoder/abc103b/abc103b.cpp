#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s, q; cin >> s >> q;
    for (int i = 0; i < isz(s); ++i) {
        if (s == q) {
            cout << "Yes" << en;
            return;
        }
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    cout << "No" << en;
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