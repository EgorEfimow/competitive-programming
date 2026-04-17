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
    int n; cin >> n;
    vi v(n);
    for (int &e : v) cin >> e;

    vi cv(v);
    sort(all(cv));

    auto mx = max_element(all(v));
    auto mn = min_element(all(v));
    if (cv == v) cout << 0 << en;
    else if (v.back() == *mx || v[0] == *mn) cout << 1 << en;
    else {
        if (abs(distance(v.end(), mx)) + abs(distance(v.begin(), mn)) == 2 * n - 1) 
            cout << 3 << en;
        else cout << 2 << en;
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