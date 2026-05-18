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
    string s, t; cin >> s >> t;

    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            cnt1 += (s[i] == '1') ? 0 : 1;
            cnt2 += (t[i] == '1') ? 0 : 1;
        }
        else {
            cnt1 += (t[i] == '1') ? 0 : 1;
            cnt2 += (s[i] == '1') ? 0 : 1;
        }
    }
    if (cnt1 >= (n + 1) / 2 && cnt2 >= n / 2) cout << "yes" << en;
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