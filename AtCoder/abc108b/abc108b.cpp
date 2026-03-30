#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int dy = (d - b), dx = c - a;
    cout << c - dy << " " << d + dx << " " << a - dy << " " << b + dx << en;
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