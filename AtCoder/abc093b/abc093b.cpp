#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int a, b, k; cin >> a >> b >> k;

    if (b - a + 1 <= k * 2) {
        for (int i = a; i <= b; ++i) cout << i << en;
        return;
    }
    for (int i = a; i < a + k; ++i) cout << i << en;
    for (int i = b - k + 1; i <= b; ++i) cout << i << en;
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