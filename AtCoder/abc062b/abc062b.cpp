#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int h, w; cin >> h >> w;

    for (int i = 0; i < w + 2; ++i) cout << "#";
    cout << en;

    for (int i = 0; i < h; ++i) {
        string s; cin >> s;
        cout << "#" << s << "#" << en;
    }

    for (int i = 0; i < w + 2; ++i) cout << "#";
    cout << en;
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