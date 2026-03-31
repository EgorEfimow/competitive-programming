#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // if (s.substr(0, 4) == "2020" || s.substr(isz(s) - 4) == "2020" || 
    //    ((s[0]) == '2' && s.substr(isz(s) - 3) == "020") ||
    //    (s.substr(0, 2) == "20" && s.substr(isz(s) - 2) == "20") ||
    //    (s.substr(0, 3) == "202" && s[isz(s) - 1] == '0')) 
    //    cout << "YES" << en;

    for (int i = 0; i <= 4; ++i) {
        string q = s.substr(0, i) + s.substr(isz(s) - (4 - i));

        if (q == "2020") {
            cout << "YES" << en;
            return;
        }
    }
    cout << "NO" << en;
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