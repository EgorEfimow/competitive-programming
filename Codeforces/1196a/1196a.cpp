#include <bits/stdc++.h>
#include <numeric>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll arr[3] = {a, b, c};

    sort(begin(arr), end(arr));

    ll s = accumulate(begin(arr), end(arr), 1ll*0);

    cout << s / 2 << en;
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