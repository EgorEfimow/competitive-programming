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
    ll n; cin >> n;
    map<ll, ll> pqX;
    map<ll, ll> pqY;
    vector<pair<ll, ll>> v(n);

    for (ll i = 0; i < n; ++i) {
        ll x, y; cin >> x >> y;
        pqX[x]++; pqY[y]++;
        v[i] = {x, y};
    }
    ll width = pqX.rbegin()->first - pqX.begin()->first + 1ll;
    ll height = pqY.rbegin()->first - pqY.begin()->first + 1ll;
    ll ans = width * height;

    if (n == 1) {
        cout << 1 << en;
        return;
    }

    for (int i = 0; i < n; ++i) {
        ll tmpheight, tmpwidth;
        // if monster lies on convex hull
        if ((v[i].first == pqX.begin()->first) || (v[i].first == pqX.rbegin()->first) ||
            (v[i].second == pqY.begin()->first) || (v[i].second == pqY.rbegin()->first)) {
                if (pqY[v[i].second] == 1 || pqX[v[i].first] == 1) {
                    if (pqY[v[i].second] == 1)
                        pqY.erase(v[i].second);
                    else pqY[v[i].second]--;
                    if (pqX[v[i].first] == 1)
                        pqX.erase(v[i].first);
                    else pqX[v[i].first]--;
                    tmpheight = pqY.rbegin()->first - pqY.begin()->first + 1ll;
                    tmpwidth = pqX.rbegin()->first - pqX.begin()->first + 1ll;
                    ll area = tmpwidth * tmpheight;
                    ans = min(ans, (n - 1ll == area) ? (area + min(tmpwidth, tmpheight)) : area);
                    pqX[v[i].first]++;
                    pqY[v[i].second]++;
                }
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