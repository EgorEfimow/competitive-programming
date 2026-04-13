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

char used[(int)1e5 + 1];

void solve() {
    int n; cin >> n;
    int cnt = 0;
    
    vi q(n);
    for (int i = 0; i < n; ++i) {
        int e; cin >> e; e--;
        q[i] = e;
    };

    int cur = q[0];
    while (1) {
        cnt++;
        if (cur == 1) {
            cout << cnt << en;
            return;
        }
        if (used[cur]) {
            cout << -1 << en;
            return;
        }
        used[cur] = 1;
        cur = q[cur];
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