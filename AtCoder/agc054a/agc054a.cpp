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
    string s; cin >> s;

    if (s[0] != s.back()) {
        cout << 1 << en;
        return;
    }
    for (int i = 1; i < n - 2; ++i) {
        string tmp = s.substr(i, 2);
        if (tmp[0] != s[0] && tmp[1] != s.back()) {
            cout << 2 << en;
            return;
        }
    }
    cout << -1 << en;
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