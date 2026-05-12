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
    string a, phi;
    cin >> a >> phi;

    if (phi.find('a') != string::npos && isz(phi) > 1) {
        cout << -1 << en;
        return;
    }
    if (phi == "a") cout << 1ll << en;
    else cout << (1ll << isz(a)) << en;
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