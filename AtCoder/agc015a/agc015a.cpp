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
    int n, a, b; cin >> n >> a >> b;

    if (a > b) {
        cout << 0 << en; return;
    }
    if (n == 1 && a != b) {
        cout << 0 << en; return;
    }
    if ((n == 1 && a == b) || n == 2) {
        cout << 1 << en; return;
    }

    cout << 1ll* (b - a) * (n - 2) + 1 << en;

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