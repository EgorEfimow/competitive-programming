#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int a, b; cin >> a >> b;

    auto check = [](int v) -> bool {
        string s = to_string(v);
        for (int i = 0; i < isz(s) / 2; ++i) {
            if (s[i] != s[isz(s) - i - 1]) return false;
        }
        return true;
    };

    int ans = 0;
    for (int i = a; i <= b; ++i) ans += check(i);
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