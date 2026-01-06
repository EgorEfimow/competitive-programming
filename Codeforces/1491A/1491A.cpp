#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> vc(n, 0);

    int cnt = 0;

    for (int &e : vc) {
        cin >> e;
        if (e == 1) cnt++;
    }

    for (int i = 0; i < q; ++i) {
        int t, pos;
        cin >> t >> pos;
        if (t == 1) {
            if (vc[pos - 1] == 1) {
                vc[pos - 1] = 0;
                cnt--;
            }
            else {
                vc[pos - 1] = 1 - vc[pos - 1];
                cnt++;
            }
        }
        else {
            if (cnt >= pos) cout << 1 << en;
            else cout << 0 << en;
        }
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