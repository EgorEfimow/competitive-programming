#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;

    int aliceScore = 0;
    int bobScore = 0;

    vector<int> v(n);

    for (int &elem : v) cin >> elem;

    sort(all(v), greater<int>());

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) aliceScore += v[i];
        else bobScore += v[i];
    }
    cout << aliceScore - bobScore << en;
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