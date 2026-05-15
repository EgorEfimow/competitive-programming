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
    int r, g, b, w; cin >> r >> g >> b >> w;

    int cntOdd;

    cntOdd = (r % 2) + (g % 2) + (b % 2) + (w % 2);
    if (cntOdd == 0 || cntOdd == 1) {
        cout << "Yes" << en;
        return;
    }
    if (r == 0 || g == 0 || b == 0) {
        cout << "No" << en;
        return;
    }
    r--; g--; b--; w += 3;
    cntOdd = (r % 2) + (g % 2) + (b % 2) + (w % 2);
    if (cntOdd == 0 || cntOdd == 1)
        cout << "Yes" << en;
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