#include <bits/stdc++.h>
#include <string>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    vector<char> v(all(s));

    vector<char> res(n);
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n + i; ++j) {
            res[j - i] |= v[j];
        }
    }
    cout << string(all(res)) << en;
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