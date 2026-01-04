#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'

void brute(string &s) {
    // ( [ 
    // ) ]

    // ([)]
    int ans = 0;
    for (int i = 0; i < isz(s); ++i) {
        for (int j = i + 1; j < isz(s); ++j) {
            if ((s[i] == '(' && s[j] == ')') || (s[i] == '[' && s[j] == ']')) ans++;
        }
    }
    cout << ans << en;
}

void solve() {
    string s;
    cin >> s;

    multiset<char> mst;

    int ans = 0, cntRnd = 0, cntSqr = 0;

    for (char &e : s) {
        if (e == '(') cntRnd++;
        else if (e == '[') cntSqr++;
        else if (e == ')' && cntRnd > 0) {
            ans++;
            cntRnd--;
        }
        else if (e == ']' && cntSqr > 0) {
            ans++;
            cntSqr--;
        }
    }

    cout << ans << en;

    // brute(s);

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