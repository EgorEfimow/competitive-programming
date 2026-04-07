#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
	int n; cin >> n;
	map<string, int> mp;
	
	int mx = 1;
	for (int i = 0; i < n; ++i) {
		string s; cin >> s;
		mp[s]++;
		mx = max(mx, mp[s]);
	}
	
	for (auto &[k, v] : mp) {
		if (v == mx)
			cout << k << en;
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
