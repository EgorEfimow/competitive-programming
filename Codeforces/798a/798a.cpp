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
    string s; cin >> s;

    int cnt = 0;
    for (int i = 0; i < isz(s) / 2; ++i) {
        if (s[i] == s[isz(s) - i - 1]) continue;
        else cnt++;
    }
    if (isz(s) % 2 == 0) cout << ((cnt == 1) ? "YES" : "NO") << en;
    else cout << ((cnt <= 1) ? "YES" : "NO") << en;
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