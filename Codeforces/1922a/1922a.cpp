#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;

    string a, b, c;

    cin >> a >> b >> c;

    // int cnt = 0;
    // for (int i = 0; i < n; ++i) {
    //     if ((a[i] == c[i] && b[i] == c[i])) continue;
    //     else if (a[i] == c[i] || b[i] == c[i]) cnt++;
    // }
    // if (cnt <= 1)
    //     cout << "YES" << en;
    // else   
    //     cout << "NO" << en;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (((a[i] != b[i]) && (a[i] != c[i] && b[i] != c[i])) ||
            (a[i] == b[i] && a[i] != c[i])) cnt++;
    }
    if (cnt) cout << "YES" << en;
    else cout << "NO" << en;
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