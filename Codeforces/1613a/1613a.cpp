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

void pad(string &str, int n) {
    int iter = n - isz(str);
    for (int i = 0; i < iter; ++i) {
        str.push_back('0');
    }
}

void solve() {
    int q1, p1, q2, p2;
    cin >> q1 >> p1 >> q2 >> p2;

    int len1 = log10(q1) + 1, len2 = log10(q2) + 1;

    if (len1 + p1 < len2 + p2) {
        cout << "<" << en;
    }
    else if (len1 + p1 > len2 + p2) {
        cout << ">" << en;
    }
    else {
        string st, nd;
        st = to_string(q1);
        nd = to_string(q2);
        pad(st, max(len1, len2));
        pad(nd, max(len1, len2));

        if (st < nd) cout << "<" << en;
        else if (st > nd) cout << ">" << en;
        else cout << "=" << en;
    }
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