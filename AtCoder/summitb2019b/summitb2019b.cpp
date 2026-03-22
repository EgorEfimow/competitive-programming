#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;

    // n * 100 / 108 and check 3 numbers 
    int b = n * 100 / 108;
    if (int((b-1)*1.08) == n) cout << (b - 1) << en;
    else if (int(b*1.08) == n) cout << b << en;
    else if (int((b+1)*1.08) == n) cout << (b + 1) << en;
    else cout << ":(" << en;
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