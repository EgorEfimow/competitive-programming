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

    vi d6, nd6;

    for (int &e : v) {
        if (e % 6 == 0) d6.push_back(e);
        else nd6.push_back(e);
    }

    for (int &e : d6) cout << e << " ";

    sort(all(nd6));

    vi d2, d3, other;

    for (int &e : nd6) {
        if (e % 2 == 0) d2.push_back(e);
        else if (e % 3 == 0) d3.push_back(e);
        else other.push_back(e);
    }

    for (int &e : d2) cout << e << " ";
    for (int &e : other) cout << e << " ";
    for (int &e : d3) cout << e << " ";

    cout << en;
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