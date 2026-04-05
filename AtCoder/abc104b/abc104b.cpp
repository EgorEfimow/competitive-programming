#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s; cin >> s;
    int q = s[0] == 'A';

    int cnt = 0, pos = 1;
    for (int i = 2; i <= isz(s) - 2; ++i) {
        if (s[i] == 'C') {
            cnt++;
            pos = i;
        }
    }
    int e = cnt == 1;
    int l = 1;
    for (int i = 1; i < isz(s); ++i) {
        if (i == pos) continue;
        if (!islower(s[i])) l = 0;
    }
    if (q && e && l) cout << "AC" << en;
    else cout << "WA" << en;
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