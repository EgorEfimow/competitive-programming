#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
	int n, l; cin >> n >> l;
	
	vector<string> v(n);
	
	for (string &e : v) cin >> e;
	
	sort(all(v));
	
	string res = "";
	for (string &e : v) res += e;
	
	cout << res << en;
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
