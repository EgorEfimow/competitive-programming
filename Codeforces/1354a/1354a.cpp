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

ll slowSolve(ll a, ll b, ll c, ll d) {
    ll ans = 0;

    if (b >= a) {
        return b;
    }
    ans += b;

    ll curtime = b;
    for (int i = 0; i < 1e9; i++) {
        ll alarm = curtime + c;
        ll sleep = curtime + d;
        if (alarm < sleep) {
            curtime = alarm;
            continue;
        }
        else {
            ans += alarm - sleep;
            curtime = alarm;
        }
        if (ans >= a) {
            return curtime;
        }
    }   
    return -1;
}

void solve() {
    ll a, b, c, d; cin >> a >> b >> c >> d;

    // need to get up to a minutes asleep
    // wakes up after b minutes

    ll ans = 0;

    if (b >= a) {
        cout << b << en;
        return;
    }
    ans += b;

    if (d >= c) {
        ans = -1;
    }
    else {
        ll dd = c - d;
        ans += (a - b + (dd - 1)) / dd * c;
    }

    // ll q = slowSolve(a, b, c, d);

    // assert(ans == q);

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