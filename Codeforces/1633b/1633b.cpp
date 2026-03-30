#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s;
    cin >> s;

    int cnt1 = 0, cntz = 0;
    for (int i = 0; i < isz(s); ++i) {
        if (s[i] == '1') cnt1++;
        else cntz++;
    }
    if (cntz == cnt1) {
        if (s[0] == '1') cnt1--;
        else cntz--;
    }
    cout << min(cntz, cnt1) << en;
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