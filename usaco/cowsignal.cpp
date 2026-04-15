#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int, int>

void solve() {
    int h, w, k; cin >> h >> w >> k;

    for (int i = 0; i < h; ++i) {
        string s; cin >> s;
        string res(k * w, '.');
        for (int j = 0; j < isz(s); ++j) {
            if (s[j] == 'X') {
                for (int q = 0; q < k; ++q) {
                    res[j * k + q] = 'X';
                    
                }
            }
        }
        for (int i = 0; i < k; ++i) cout << res << en;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowsignal.out", "w", stdout);
    freopen("cowsignal.in", "r", stdin);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}