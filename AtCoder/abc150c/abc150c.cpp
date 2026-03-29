#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int &e : a) cin >> e;
    for (int &e : b) cin >> e;

    vector<int> init(n);
    iota(all(init), 1);

    int cnta = 0, cntb = 0;
    do {
        cnta++;
        if (init == a) break;
    } while (next_permutation(all(init)));

    iota(all(init), 1);
    do {
        cntb++;
        if (init == b) break;
    } while (next_permutation(all(init)));

    cout << abs(cnta - cntb) << en;
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