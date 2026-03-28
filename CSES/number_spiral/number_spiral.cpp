#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    ll row, col;
    cin >> row >> col;

    ll mx = max(row, col);
    if (mx % 2)
        if (mx == row)
            cout << ((mx * mx + ((mx - 1) * (mx - 1)) + 1) / 2) - (mx - min(col, row)) << en;
        else 
            cout << ((mx * mx + ((mx - 1) * (mx - 1)) + 1) / 2) + (mx - min(col, row)) << en;
    else
        cout << ((mx * mx + (mx - 1) * (mx - 1)) / 2) + (row - col) + 1 << en;
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