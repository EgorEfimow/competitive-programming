#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int a, b; cin >> a >> b;

    int v1 = 12.5 * a, v2 = 10*b;

    // check both values

    int arr[3] = {0, 1, -1};

    // from constraints we can see that max ans is no more than 2e3, so we can just bruteforce solution
    for (int &e : arr) {
        if (int((v1 + e) * 0.08) == a && int((v1 + e) * 0.1) == b) {
            cout << v1 + e << en;
            return;
        }
        else if (int((v2 + e) * 0.08) == a && int((v2 + e) * 0.1) == b) {
            cout << v2 + e << en;
            return;
        }
    }
    // if (int(v1 * 0.08) == a && int(v1 * 0.1) == b) cout << v1 << en;
    // else if (int((v1 + 1) * 0.08) == a && int((v1 + 1) * 0.1) == b) cout << v1 + 1 << en;
    // else if (int((v1 - 1) * 0.08) == a && int((v1 - 1) * 0.1) == b) cout << v1 - 1 << en;
    // else if (int(v2 * 0.08) == a && int(v2 * 0.1) == b) cout << v2 << en;
    // else if (int((v2 + 1) * 0.08) == a && int((v2 + 1) * 0.1) == b) cout << v2 + 1 << en;
    // else if (int((v2 - 1) * 0.08) == a && int((v2 - 1) * 0.1) == b) cout << v2 - 1 << en;
    cout << -1 << en;
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