#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int &e : v) cin >> e;

    for (int i = isz(v) - 1; i > 0; --i) {
        if (v[i] >= v[i - 1]) continue;
        if (v[i - 1] - 1 > v[i]) {
            cout << "No" << en;
            return;
        }
        else {
            v[i - 1]--;
        }
    }
    cout << "Yes" << en;
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