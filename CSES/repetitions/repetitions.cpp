#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s;
    cin >> s;

    int ans = 1, curlen = 1;

    for (int i = 1; i < isz(s); ++i) {
        if (s[i] != s[i - 1]) {
            curlen = 1;
            continue;
        }
        curlen++;
        ans = max(ans, curlen);
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