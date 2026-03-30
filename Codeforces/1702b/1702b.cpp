#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s;
    cin >> s;

    set<char> st;
    int ans = 0;
    for (int i = 0; i < isz(s); ++i) {
        if (isz(st) == 3 && st.find(s[i]) != st.end())
            continue;
        else if (isz(st) == 3) {
            ans++;
            st.erase(all(st));
        }
        st.insert(s[i]);
    }
    if (isz(st)) ans++;
    cout << ans << en;
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