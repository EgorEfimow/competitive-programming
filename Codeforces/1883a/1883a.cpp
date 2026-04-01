#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s;
    cin >> s;

    int q = 1, ans = 0;
    for (int i = 0; i < isz(s); ++i) {
        int p = s[i] - '0';
        if (p == 0) p += 10;
        ans += abs(p - q) + 1;
        q = p;
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