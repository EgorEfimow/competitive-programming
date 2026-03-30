#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int a, b, n;
    cin >> a >> b >> n;

    while (1) {
        int toTake = gcd(a, n);
        if (toTake > n) {
            cout << 1 << en;
            return;
        }
        n -= toTake;

        toTake = gcd(b, n);
        if (toTake > n) {
            cout << 0 << en;
            return;
        }
        n -= toTake;
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