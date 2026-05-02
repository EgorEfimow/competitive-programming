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
    map<int, int> mp1;
    map<int, int> mp2;
    map<int, int> mp3;

    auto fillmap = [](map<int, int> &m) {
        for (int i = 0; i < 6; ++i) {
            int q; cin >> q;
            m[q]++;
        }
    };

    fillmap(mp1); fillmap(mp2); fillmap(mp3);

    ll ans = 0;

    string s = "456";
    do {
        ans += mp1[s[0] - '0'] * mp2[s[1] - '0'] * mp3[s[2] - '0'];
    } while (next_permutation(all(s)));
    
    cout << fixed << setprecision(15) << ans / 216.0 << en;
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