#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;
    int mv = 0;
    for (int i = 0; i < n; ++i) {
        int v; cin >> v;
        mv = max(mv, v);
    }
    cout << mv * n << en;
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