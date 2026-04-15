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
    int n; cin >> n;
    vi v(n);

    for (int &e : v) cin >> e;

    vi vc(v);
    for (int i = 1; i < n - 1; ++i) {
        if (v[i] == -1) v[i] = 0;
    }

    if (v[0] == v.back() && v[0] != -1) {
        cout << 0 << en;
    }
    else if(v[0] == -1 && v.back() == -1) {
        v[0] = 0; v.back() = 0;
        cout << 0 << en;
    }
    else if (v[0] == -1) {
        v[0] = v.back();
        cout << 0 << en;
    }
    else if (v.back() == -1) {
        v.back() = v[0];
        cout << 0 << en;
    }
    else {
        cout << abs(v.back() - v[0]) << en;
    }

    for (int &e : v) cout << e << " ";
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