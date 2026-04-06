#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
	ll n, c; cin >> n >> c;
	vector<ll> v(n);
	for (ll &e : v) cin >> e;
	
	sort(all(v));
	
	ll ans = n;
	while (!v.empty()) {
		ll pos = -1;
		// cout << isz(v) << en;
		for (ll i = isz(v) - 1; i >= 0; --i) {
			if (v[i] <= c) {
				pos = i;
				break;
			}
		}
		if (pos == -1) {
			ans--;
			v.erase(v.end() - 1);
		}
		else v.erase(v.begin() + pos);
		for (ll &e : v) e *= 2;
	}
	cout << n - ans << en;
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
