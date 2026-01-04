#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'

void solve() {
    int n;
    cin >> n;
    if (n & 1) 
        cout << 1LL*((n / 2) + 1) * ((n / 2) + 1) << en;
    else 
        cout << 1LL*(n / 2) * (n / 2)<< en;
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