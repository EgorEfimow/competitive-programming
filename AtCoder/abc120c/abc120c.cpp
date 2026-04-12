#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int, int>

void solve() {
    string s; cin >> s;
    stack<char> st;

    int ans = 0;
    for (int i = 0; i < isz(s); ++i) {
        if (st.empty()) {
            st.push(s[i]);
            continue;
        }
        if (abs(st.top() - s[i]) == 1) {
            ans += 2;
            st.pop();
        }
        else st.push(s[i]);
    }
    cout << ans << en;
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