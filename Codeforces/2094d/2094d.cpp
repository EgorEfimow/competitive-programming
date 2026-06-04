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
    string p; cin >> p;
    string s; cin >> s;

    while (!p.empty()) {
        int lp = 0, ls = 0, len1 = 0, len2 = 0;;
        while (p[lp] == s[0]) {
            lp++; len1++;
        }
        while (s[ls] == p[0]) {
            ls++; len2++;
        }

        if (len2 < len1 || len2 > 2*len1 || len1 == 0) {
            cout << "no" << en;
            return;
        }

        p.erase(0, len1);s.erase(0, len2);
    }

    if (p.empty() && !s.empty())
        cout << "no" << en;
    else
        cout << "yes" << en;
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