#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;
    set<string> st;
    string prev;
    cin >> prev;
    st.insert(prev);
    for (int i = 0; i < n - 1; ++i) {
        string s; cin >> s;
        if (st.find(s) != st.end() || s[0] != prev.back()) {
            cout << "No" << en; return;
        }
        st.insert(s);
        prev = s;
    }
    cout << "Yes" << en;
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