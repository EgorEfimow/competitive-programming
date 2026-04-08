#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    vector<int> d(n + 1);
    for (int &e : v) cin >> e;

    int ans = 0;
    for (int i = 1; i < isz(v); ++i) {
        int diff = abs(v[i] - v[i - 1]);
        d[i] = diff;
        ans += diff;
    }

    // 0 11 14 6 2 0
    int tmp = ans;
    for (int i = 0; i < isz(v); ++i) {
        if (i == 0 || i == isz(v) - 1)
            ans = min(ans, tmp - (d[i] + d[i + 1]));
        else {
            if ((v[i] < v[i + 1] && v[i] > v[i - 1]) || (v[i] > v[i + 1] && v[i] < v[i - 1]))
                continue;
            else
                ans = min(ans, tmp - (d[i] + d[i + 1]) + abs(d[i] - d[i + 1]));
        } 
    }

    cout << ans << en;
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