#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    string s, q; cin >> s >> q;
    
    int pref = 0;
    
    for (int i = 0; i < min(isz(s), isz(q)); ++i) {
    	if (s[i] == q[i]) pref++;
    	else break;
    }
    int t = 0;
    if (pref != 0) t = 1;
    cout << pref + t + (isz(s) - pref) + (isz(q) - pref) << en;
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
