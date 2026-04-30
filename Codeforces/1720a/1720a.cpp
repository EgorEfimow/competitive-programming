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
    ll a, b, c, d; cin >> a >> b >> c >> d;

    ll top = b * c;
    ll bot = a * d;

    if ((a == 0 && c == 0) || (top == bot)) {
        cout << 0 << en;
        return;
    }

    if ((a == 0 && c != 0) || (a != 0 && c == 0) || 
        (max(top, bot) % min(top, bot) == 0)) cout << 1 << en;
    else cout << 2 << en;
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