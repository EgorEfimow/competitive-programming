#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int n; cin >> n;

    vll v(n);
    for (int i = 0; i < n; ++i) {
        int q; cin >> q;
        v[i] = q;
    }

    for (int i = 0; i < n - 1; ++i) {
        ll d = max(0ll, v[i] - i);
        v[i + 1] += d;
        v[i] -= d;
    }

    for (int i = 0; i < n - 1; ++i) {
        if (v[i + 1] <= v[i]) {
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