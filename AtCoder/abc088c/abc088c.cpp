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
    vvi v(3, vi(3));
    for (auto &e : v) {
        for (auto &x : e) cin >> x;
    }
    
    char nd = 0, rd = 0;
    for (int i = 1; i < 3; ++i) {
        for (int a = -200; a < 201; ++a) {
            int found = 0;
            for (int j = 0; j < 3; ++j) {
                if (v[0][j] + a == v[i][j]) found++;
            }
            if (found == 3 && i == 1) {
                nd = 1;
                break;
            }
            else if (found == 3 && i == 2) {
                rd = 1;
                break;
            }
        }
    }
    if (rd && nd) cout << "Yes" << en;
    else cout << "No" << en;
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