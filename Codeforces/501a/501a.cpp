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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll mis = max((3 * a) / 10, a - a / 250 * c);
    ll vas = max((3 * b) / 10, b - b / 250 * d);

    if (mis > vas) cout << "Misha" << en;
    else if (mis < vas) cout << "Vasya" << en;
    else cout << "Tie" << en;
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