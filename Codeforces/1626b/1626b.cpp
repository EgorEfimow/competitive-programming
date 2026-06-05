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

int brute(const string &str) {
    string q = str;

    int mx = -1;
    for (int i = 0; i < isz(q); ++i) {
        string tmp = q;
        int res = (tmp[i] - '0') + (tmp[i + 1] - '0');
        tmp.insert(i, to_string(res));
        tmp.erase(i + isz(to_string(res)), 2);

        mx = max(stoi(tmp), mx);
    }

    return mx;
}

void solve() {
    string s; cin >> s;
    vector<pii> v;

    int sum = -1;
    for (int i = 0; i < isz(s) - 1; ++i) {
        sum = (s[i] - '0') + (s[i + 1] - '0');
        if (sum >= 10) {
            v.pb({i, sum});
        }
    }

    sort(all(v)); 

    int l;
    if (v.empty()) l = 1;
    else l = 2;
    if (l == 2) {
        s.insert(v.back().first, to_string(v.back().second));
        s.erase(v.back().first + isz(to_string(v.back().second)), 2);
    }
    else {
        s.insert(0, to_string((s[0] - '0') + (s[1] - '0')));
        s.erase(1, 2);
    }

    cout << s << en;
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