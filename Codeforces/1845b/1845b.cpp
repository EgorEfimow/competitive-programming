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
    int xA, yA; cin >> xA >> yA;

    int xB, yB, xC, yC;
    cin >> xB >> yB >> xC >> yC;

    int dxB = xA - xB, dyB = yA - yB;
    int dxC = xA - xC, dyC = yA - yC;


    int ans = 1;
    if ((dxB > 0 && dxC > 0) || (dxB < 0 && dxC < 0))
        ans += min(abs(dxB), abs(dxC));
    if ((dyB > 0 && dyC > 0) || (dyB < 0 && dyC < 0))
        ans += min(abs(dyB), abs(dyC));
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