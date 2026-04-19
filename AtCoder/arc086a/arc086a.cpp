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

const int SIZE = 2e5 + 1;

void solve() {
    int n, k; cin >> n >> k;
    vi v(n);
    set<int> st;
    int cnt[SIZE] = {};

    for (int &e : v) {
        cin >> e;
        cnt[e]++;
        st.insert(e);
    }

    if (isz(st) <= k) {
        cout << 0 << en;
        return;
    }

    sort(cnt, cnt + SIZE);

    int ans = 0, sz = isz(st);
    for (int i = 0; i < SIZE; ++i) {
        if (cnt[i] == 0) continue;
        ans += cnt[i];
        sz--;
        if (sz == k) {
            cout << ans << en;
            return;
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