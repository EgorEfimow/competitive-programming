#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int n; cin >> n;
    if (n % 2 == 0) {
        assert(gcd(n / 2, n / 2 - 1) == 1);
        cout << n / 2 << " " << n / 2 - 1 << " " << 1 << en;
    }
    else {
        int c = 1;
        for (int i = 2; i < 1e4; ++i) {
            if (gcd(i, n - c - i) == c) {
                cout << i << " " << n - c - i << " " << c << en;
                break;
            }
        }
    }
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