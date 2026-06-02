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
    int n;
    cin >> n;

    ll cnt1 = 0, cnt2 = 0, res = 0, cap = 0;

    for (int i = 0; i < n; i++) {
        ll q; cin >> q;

        if (q == 1) cnt1++;
        else {
            cnt2++; 
            res += q; 
            cap += q / 2;
        }
    }
    
    if (!cnt2) {
        cout << 0 << en;
        return;
    }

    ll ans = res + min(cnt1, cap - (cnt2 > 1 ? cnt2 : 0));
    cout << (ans < 3 ? 0 : ans) << en;
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