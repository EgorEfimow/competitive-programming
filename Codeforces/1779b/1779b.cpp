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
    if (n == 3) {
        cout << "NO" << en;
        return;
    }
    cout << "YES" << en;
    if (n % 2 == 0) {
        for (int i = 0; i < n; ++i) {
            if (i % 2) cout << -1 << " ";
            else cout << 1 << " ";
        }
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (i % 2) cout << -(n / 2) << " ";
            else cout << n / 2 - 1 << " ";
        }
    }
    cout << en;
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