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
    ll a, b, k; cin >> a >> b >> k;
    ll g = gcd(a, b);
    if (a == b || (a <= k && b <= k) || (gcd(a, b) != 1 && a / g <= k && b / g <= k)) {
        cout << 1 << en; 
        return;
    }
    cout << 2 << en;
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