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
    int n, m, q; cin >> n >> m >> q;
    int t1, t2; cin >> t1 >> t2;
    int pos; cin >> pos;
    if (t1 > t2) swap(t1, t2);
    if (pos > t1 && pos < t2)
        cout << (t2 - t1) / 2 << en;
    else if (pos < t1)
        cout << t1 - 1 << en;
    else if (pos > t2)
        cout << n - t2 << en;
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