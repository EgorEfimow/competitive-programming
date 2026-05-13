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
    string s; cin >> s;

    int pos = n;
    char mi = s.back();
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] > mi) {
            cout << "YES" << en;
            cout << i + 1 << " " << pos << en;
            return;
        }
        else pos = i + 1;
        mi = min(mi, s[i]);
    }
    cout << "NO" << en;
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