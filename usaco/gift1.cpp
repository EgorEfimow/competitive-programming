/*
ID: cesare1
TASK: gift1
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    freopen("gift1.out", "w", stdout);
    freopen("gift1.in", "r", stdin);

    int n; cin >> n;
    vector<int> v(n);
    vector<string> mp;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        mp.push_back(s);
    }
    for (int i = 0; i < n; ++i) {
        int q, t;
        string name; cin >> name;
        cin >> q >> t;
        for (int j = 0; j < t; ++j) {
            string to; cin >> to;
            v[distance(mp.begin(), find(all(mp), to))] += q / t;
            v[distance(mp.begin(), find(all(mp), name))] -= q / t;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << mp[i] << " " << v[i] << en;
    }
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