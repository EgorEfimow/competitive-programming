#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int a, b, c; cin >> a >> b >> c;
    vi v = {a, b, c};
    sort(all(v));

    int cntodd = 0, cnteven;
    for (int i = 0; i < 3; ++i) {
        cntodd += v[i] % 2;
    }

    cnteven = 3 - cntodd;
    if (cntodd == 3 || cnteven == 3) {
        cout << (v[1] - v[0]) / 2 + v[2] - v[1] << en;
        return;
    }
    
    if (v[0] % 2 == v[1] % 2) cout << (v[1] - v[0]) / 2 + v[2] - v[1] << en;
    else if (v[0] % 2 == v[2] % 2) cout << (v[2] - v[0]) / 2 + (v[2] - v[1] + 1) / 2 + 1;
    else cout << (v[2] - v[1]) / 2 + (v[2] - v[0] + 1) / 2 + 1 << en;
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