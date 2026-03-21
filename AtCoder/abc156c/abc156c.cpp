#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &elem : v) cin >> elem;

    int ans = 1e9;
    for (int i = *min_element(v.begin(), v.end()); i <= *max_element(v.begin(), v.end()); ++i) {
        int s = 0;
        for (int &e : v) {
            s += (i - e)*(i - e);
        }
        ans = min(ans, s);
    }
    cout << ans << en;
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