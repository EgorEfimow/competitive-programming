#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    int currPassed = 0;
    int rankOverseas = 1;
    for (int i = 0; i < isz(s); ++i) {
        if (s[i] == 'a' && currPassed < a + b) {
            currPassed++;
            cout << "Yes" << en;
        }
        else if (s[i] == 'b' && (rankOverseas <= b && currPassed < a + b)) {
            currPassed++;
            rankOverseas++;
            cout << "Yes" << en;
        }
        else cout << "No" << en;
    }
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