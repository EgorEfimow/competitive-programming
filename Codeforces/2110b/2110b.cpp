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
    string s; cin >> s;

    int cnt = 0;
    stack<char> st;

    for (int i = 0; i < isz(s); ++i) {
        if (st.empty()) {
            cnt++;
            st.push(s[i]);
            continue;
        }
        if (st.top() == '(' && s[i] == ')') st.pop();
        else st.push(s[i]);
    }

    if (cnt > 1) cout << "yes" << en;
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