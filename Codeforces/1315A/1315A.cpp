#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    // находим площадь справа, слева, снизу, сверху и всё
    int l, r, u, d;
    l = x * b; r = (a - x - 1) * b;
    u = y * a; d = (b - y - 1) * a;

    cout << max(max(l, r), max(u,d)) << en;
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