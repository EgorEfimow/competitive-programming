#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &elem : v) cin >> elem;

    int ans = 1, curlen = 1;

    sort(v.begin(), v.end());

    for (int i = 0; i < isz(v) - 1; ++i) {
        if (v[i + 1] == v[i]) continue;
        if (v[i + 1] - v[i] == 1) {
            curlen++;
            ans = max(curlen, ans);
        } else {
            curlen = 1;
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