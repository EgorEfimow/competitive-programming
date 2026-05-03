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
    int t1 = 0, t2 = 0;
    for (int i = 0; i < 4; ++i) {
        int a, b; cin >> a >> b;
        t1 += a; t2 += b;
    }
    if (t1 > t2) cout << 1 << en;
    else if (t2 > t1) cout << 2 << en;
    else cout << "DRAW" << en;
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