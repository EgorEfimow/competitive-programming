#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s; cin >> s;

    set<char> q;

    for (int i = 0; i < isz(s); ++i) {
        if (s[i] == 'r' || s[i] == 'g' || s[i] == 'b') q.insert(s[i]);
        else if (q.find(s[i] + 32) != q.end()) continue;
        else {
            cout << "NO" << en;
            return;
        }
    }
    cout << "YES" << en;
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