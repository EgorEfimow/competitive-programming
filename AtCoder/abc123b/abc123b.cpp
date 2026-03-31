#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int s = 0;

    vector<int> v(5);

    for (int &e : v) cin >> e;

    for (int &e : v) {
        s += ((e + 9) / 10) * 10;
    }

    int ansg = s, ans;

    for (int &e : v) {
        ans = min(ansg, ansg - ((e + 9) / 10) * 10 + e);
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