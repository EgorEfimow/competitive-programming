#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int a, b;
    cin >> a >> b;

    if (0 >= a && 0 <= b) cout << "Zero" << en;
    else if (a > 0) cout << "Positive" << en;
    else {
        // int cntn = 0;
        // for (int i = a; i <= b; ++i) {
        //     cntn += i < 0;
        // }
        // if (cntn & 1) cout << "Negative" << en;
        // else cout << "Positive" << en;
        int r = (b - a + 1);
        if (r % 2) cout << "Negative" << en;
        else cout << "Positive" << en;
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