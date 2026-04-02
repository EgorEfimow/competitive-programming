#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s; cin >> s;

    int ans = 0; 
    for (int i = 1; i < isz(s); ++i) {
        if (s[i] == s[i - 1]) {
            ans++;
            s[i] = (s[i - 1] == '1') ? '0' : '1';
        }
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