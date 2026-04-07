#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
	string s; cin >> s;
	
	string prev = "";
	int ans = 0, len = 1;
	for (int i = 0; i < isz(s) && len + i <= isz(s); ) {
		string str = s.substr(i, len);
		if (str == prev) {
			len++;
		}
		else {
			prev = str;
			i += len;
			ans++;
			len = 1;
		}
	}
	cout << ans << en;
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
