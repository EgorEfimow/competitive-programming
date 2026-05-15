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
    string s, t; cin >> s >> t;
    vector<char> ss(isz(s)), tt(isz(t));

    for (int i = 0; i < isz(s); ++i) {
        ss[i] = s[i] - 'a';
        tt[i] = t[i] - 'a';
    }

    for (int i = 0; i < 26; ++i) {
        vector<char> tmp(all(ss));
        for (int j = 0; j < isz(ss); ++j) {
            tmp[j] = (ss[j] + i) % 26;
        }
        if (tmp == tt) {
            cout << "Yes" << en;
            return;
        }
    }
    cout << "No" << en;
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