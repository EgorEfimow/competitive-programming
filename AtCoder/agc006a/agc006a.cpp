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
    int n; cin >> n;
    string q; cin >> q;
    string s; cin >> s;

    if (q == s) {
        cout << isz(q) << en;
        return;
    }

    int len = 0;
    for (int i = n - 1; i >= 0; --i) {
        string s1 = q.substr(n - i);
        string s2 = s.substr(0, i);

        if (s1 == s2) {
            len = i;
            break;
        }
    }
    cout << isz(q) + isz(q) - len << en;
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