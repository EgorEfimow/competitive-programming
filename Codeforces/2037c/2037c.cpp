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
    int n, ma = 0, pos = 0; cin >> n;
    vi ans(n);
    for (int i = 1; i <= n; i += 2, pos++) {
        ans[pos] = i;
        ma = max(ma, i);
    }
    
    auto prime = [](const int value) -> bool {
        for (ll i = 2; i * i <= value; ++i) {
            if (value % i == 0) return false;
        }
        return true;
    };

    int val = -1;
    bool found = 0;
    for (int i = 2; i <= n; i += 2) {
        if (prime(ma + i)) continue;
        found = 1;
        val = i;
        break;
    }
    if (!found) {
        cout << -1 << en;
        return;
    }
    ans[pos] = val;
    pos++;
    for (int i = 2; i <= n; i += 2, pos++) {
        if (i == val) {pos--; continue;}
        ans[pos] = i;
    }
    for (int &e : ans) cout << e << " ";
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