#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    // if (n == 1) {
    //     cout << 2 << " " << 3 << " " << 1 << en;
    //     return;
    // }
    vector<int> v(3*n);
    iota(all(v), 1);
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " " << v[i] + n + i<< " " << v[i] + n + 1 + i<< " ";
    }
    cout << en;
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