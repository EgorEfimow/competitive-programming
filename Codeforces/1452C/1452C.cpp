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

    int ans = 0;

    for (char &e : s) {
        if (e == '(' || e == '[') mst.insert(e);
        else {
            auto pos1 = mst.find('(');
            auto pos2 = mst.find('[');
            if (e == ')' && (pos1 != mst.end())) {
                ans++;
                mst.erase(pos1);
            }
            if (e == ']' && (pos2 != mst.end())) {
                ans++;
                mst.erase(pos2);
            }
        }
        // else if ((e == ')' && (pos1 != mst.end())) || 
        //          (e == ']' && (pos2 != mst.end()))) {
        //     ans++;
        //     mst.erase(e);
        // }
    }

    cout << ans << " ";

    brute(s);

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