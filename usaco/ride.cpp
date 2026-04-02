/*
ID: cesare1
TASK: ride
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    freopen("ride.out", "w", stdout);
    freopen("ride.in", "r", stdin);
    string s, q; cin >> s >> q;

    ll a = 1, w = 1;
    
    for (char &e : s) a *= (e - 'A') + 1;
    for (char &e : q) w *= (e - 'A') + 1;

    if ((a % 47) == (w % 47)) cout << "GO" << en;
    else cout << "STAY" << en;
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