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
    int n, m, cntNeg = 0, cnt0 = 0, s = 0, mi = 101; cin >> n >> m;
    vvi v(n, vi(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
            mi = min(mi, abs(v[i][j]));
            s += abs(v[i][j]);

            if (v[i][j] < 0) cntNeg++;
            else if (v[i][j] == 0) cnt0++;
        }
    }
    if ((cntNeg % 2 == 0) || (cnt0 >= 1)) cout << s << en;
    else {
        int cnt = 0, s = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (cnt == 0 && abs(v[i][j]) == mi) {
                    v[i][j] = (v[i][j] > 0) ? -v[i][j] : v[i][j];
                    cnt++;
                }
                else
                    v[i][j] = abs(v[i][j]);

                s += v[i][j];
            }
        }
        cout << s << en;
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