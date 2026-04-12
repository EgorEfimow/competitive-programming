#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int n; cin >> n;
    int cnt = 0, prev = -1;
    char f = 0;
    for (int i = 0; i < n; ++i) {
        int v; cin >> v;
        if (v == 1) cnt++;
        if (prev == 0 && v == 0)
            f = 1;
        prev = v;
    }
    if (cnt == n)
        f = 1;
    if (f) cout << "yes" << en;
    else cout << "no" << en;
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