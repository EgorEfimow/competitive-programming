#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int n, m; cin >> n >> m;
    vi l(n), r(m);

    auto read = [](const int isz, vi &arr) {
        for (int i = 0; i < isz; ++i) {
            int q; cin >> q;
            arr[i] = q;
        }
    };

    read(n, l); read(m, r);

    int left = 0, right = 0;
    int cnt = 0;
    while (right < m) {
        if (left < n && r[right] > l[left]) {
            cnt++;
            left++;
        }
        else {
            cout << cnt << " ";
            right++;
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