#include <algorithm>
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
#define vpii vector<pii>

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    vi v(n); for (int &e : v) {
        cin >> e;
    }

    if (n == 1 && v[0] == 1) {
        cout << "yes" << en;
        return;
    }
    if (n == 1) {
        cout << "no" << en;
        return;
    }

    vi path;

    for (int i = 0; i < n - 1; ++i) {
        int j = i, cnt = 0;
        int elem = v[j];
        while (j < n && v[j] == elem) {
            j++;
            cnt++;
        }
        
        path.pb(cnt);
        if (j == n) {
            path.pb(-v.back());
            break;
        }
        path.pb(-(v[i] - v[j]));

        i = j - 1;
    }

    if (v.back() != v[isz(v) - 2]) {
        path.pb(1);
        path.pb(-v.back());
    }

    for (int i = 0; i < isz(path) / 2; ++i)
        if (path[i] != -path[isz(path) - i - 1] || -path[i] != path[isz(path) - i - 1]) {
            cout << "no" << en;
            return;
        }
    cout << "yes" << en;
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