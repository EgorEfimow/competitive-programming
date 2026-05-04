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
    int n, m, k; cin >> n >> m >> k;

    vi ql(m);
    for (int &e : ql) cin >> e;

    set<int> st;
    for (int i = 0; i < k; ++i) {
        int q; cin >> q;
        st.insert(q);
    }

    if (k < (n - 1)) {
        cout << string(m, '0') << en;
        return;
    }
    // there is only 3 cases
    // 1: knows all quesions -> 11...11
    // 2: knows less then n - 1 questions -> 00..00
    // 3: knows n - 1 question -> only 1 quesion is 1, others is 0
    for (int i = 0; i < m; ++i) {
        int removed = st.erase(ql[i]);
        if (isz(st) == n - 1)
            cout << 1;
        else cout << 0;
        if (removed)
            st.insert(ql[i]);
    }
    cout << en;
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