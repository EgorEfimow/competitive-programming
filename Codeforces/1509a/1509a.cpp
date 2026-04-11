#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define pii pair<int, int>

void solve() {
    int n; cin >> n;
    
    vi odd; vi even;
    for (int i = 0; i < n; ++i) {
        int v; cin >> v;
        if (v & 1) odd.push_back(v);
        else even.push_back(v);
    }

    for (int &e : odd) cout << e << " ";
    for (int &e : even) cout << e << " ";
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