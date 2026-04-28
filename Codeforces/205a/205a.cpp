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
    
    ll pos = -1, mi = 1e18;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        
        int q; cin >> q;
        if (q < mi) {
            cnt = 1;
            mi = q;
            pos = i + 1;
        }
        else if (q == mi) cnt++;
    }
    if (cnt > 1) cout << "Still Rozdil" << en;
    else cout << pos << en;
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