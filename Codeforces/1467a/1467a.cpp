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

    // lets say n = 3
    // 98901234...
    
    if (n == 1) cout << 9 << en;
    else if (n == 2) cout << 98 << en;
    else if (n == 3) cout << 989 << en;
    else {
        cout << 989;
        for (int i = 0; i < n - 3; ++i) {
            cout << i % 10;
        }
        cout << en;
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