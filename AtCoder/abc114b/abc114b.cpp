#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s;
    cin >> s;

    int ans = 1e9;
    for (int i = 0; i <= isz(s) - 3; ++i) {
        ans = min(abs(753 - stoi(s.substr(i, 3))), ans);
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