#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
	ll n, k; cin >> n >> k;
	vector<ll> v(n);
	ll p = 1;
	for (ll &e : v) {
		cin >> e;
		p *= e;
	}	
	assert(p != 0);
	if (2023 % p) cout << "no" << en;
	else {
		cout << "yes" << en;
		cout << 2023 / p << " ";
		int cnt = 1;
		while (cnt < k) {
			cout << 1 << " ";
			cnt++;
		}
		cout << en;
	}
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