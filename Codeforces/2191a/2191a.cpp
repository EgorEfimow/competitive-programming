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
    for (int &e : v) {
        cin >> e;
        e--;
    }

    vector<int> idx(n);
    iota(all(idx), 0);
    // for (int i = 0; i < n; i += 2) idx[i] = 1;

    sort(all(idx), [&](int l, int r) {
        return v[l] < v[r];
    });

    for (int i = 1; i < isz(idx); ++i) {
        if (idx[i] % 2 == idx[i - 1] % 2) {
            cout << "no" << en;
            return;
        }
    }
    cout << "yes" << en;
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