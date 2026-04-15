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
    string s; cin >> s;

    int ans = 0;
    for (int i = 1; i < n - 1; ++i) {
        string l = s.substr(0, i), r = s.substr(i);
        set<char> s1(all(l)), s2(all(r)), sint;

        set_intersection(all(s1), all(s2), inserter(sint, sint.begin()));

        ans = max(ans, isz(sint));
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