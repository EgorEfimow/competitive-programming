#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    vector<int> v(7);
    for (int &e : v) cin >> e;
    sort(all(v));
    
    int ans = 0;
    for (int i = 0; i < 6; ++i) ans -= v[i];
    cout << ans + v.back() << en;
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