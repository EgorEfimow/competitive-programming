#include <bits/stdc++.h>
#include <cctype>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int a, b;
    cin >> a >> b;

    string s;
    cin >> s;

    if (s[a] != '-') {
        cout << "No" << en; return;
    }
    for (int i = 0; i < isz(s); ++i) {
        if (i == a) continue;
        if (!isdigit(s[i])) {
            cout << "No" << en;
            return;
        }
    }
    cout << "Yes" << en;
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