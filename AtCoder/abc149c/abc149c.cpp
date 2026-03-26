#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

bool check(int v) {
    for (int i = 2; i * i < v; ++i)
        if (v % i == 0) return false;
    return true;
}

void solve() {
    ll n;
    cin >> n;

    for (int i = n; i < 1e7; ++i) {
        if (check(i)) {
            cout << i << en;
            return;
        }
    }
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