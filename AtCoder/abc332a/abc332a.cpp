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
    int sum = 0;
    int n, s, k; cin >> n >> s >> k;
    for (int i = 0; i < n; ++i) {
        int p, q; cin >> p >> q;
        sum += p * q;
    }
    if (sum < s) cout << sum + k << en;
    else cout << sum << en;
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