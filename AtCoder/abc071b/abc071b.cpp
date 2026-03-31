#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s;
    cin >> s;

    for (char i = 'a'; i <= 'z'; ++i) {
        if (s.find(i) == string::npos) {
            cout << i << en;
            return;
        }
    }
    cout << "None" << en;
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