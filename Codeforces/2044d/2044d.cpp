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
    for (int &e : v) {
        cin >> e;
    }
    
    if (n == 1) {
        cout << v.back() << en;
        return;
    }
    
    cout << v[0] << " ";
    
    vi ext;
    
    set<int> used(all(v));

    for (int i = 1; i <= n; ++i) {
        if (used.find(i) != used.end()) 
            continue;
        ext.pb(i);
    }

    used.clear(); used.insert(v[0]);

    for (int i = 1; i < n - 1; ++i) {
        if (used.find(v[i]) == used.end()) {
            cout << v[i] << " ";
            used.insert(v[i]);
            continue;
        }
        cout << ext.back() << " ";
        ext.pop_back();
    }

    cout << v.back() << en;
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