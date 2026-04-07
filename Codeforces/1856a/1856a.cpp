#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

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

    vector<int> idx(n);
    iota(all(idx), 0);

    vector<int> idx2(n);
    iota(all(idx2), 0);

    sort(all(idx), [&](int l, int r) {
        return v[l] < v[r];
    });

    vector<int> tmp(v);
    sort(all(v));
    if (v == tmp) {
        cout << 0 << en;
        return;
    }
    int pos = isz(idx);
    for (int i = isz(idx) - 1; i >= 0; --i) { 
        if (idx[i] != idx2[i]) break;
        pos = i;
    }

    cout << *max_element(tmp.begin(), tmp.begin() + pos) << en;
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