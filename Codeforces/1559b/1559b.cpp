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

    int pos = -1;
    for (int i = 0; i < isz(s); ++i) {
        if (s[i] != '?') {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        for (int i = 0; i < n; ++i) {
            if (i % 2) cout << "R";
            else cout << "B";
        }
        cout << en;
        return;
    }

    // dir {-1, +1}
    auto expand = [&](const int dir, const int pos) {
        int init = pos;
        while (init + dir >= 0 && init + dir < n) {
            if (s[init + dir] == '?' && s[init] == 'B') 
                s[init + dir] = 'R';
            else if (s[init + dir] == '?' && s[init] == 'R')
                s[init + dir] = 'B';
            init = init + dir;
        }
    };

    expand(1, pos); expand(-1, pos);

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