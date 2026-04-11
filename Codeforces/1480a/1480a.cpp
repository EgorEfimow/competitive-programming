#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define pii pair<int, int>

void solve() {
    string s; cin >> s;
    for (int i = 0; i < isz(s); ++i) {
        if (i % 2 == 0 && s[i] == 'a') s[i] = 'b';
        else if (i % 2 == 0) s[i] = 'a';
        else {
            if (s[i] == 'z') s[i] = 'y';
            else s[i] = 'z';
        }
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