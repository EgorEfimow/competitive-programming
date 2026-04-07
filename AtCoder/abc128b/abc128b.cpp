#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
	int n; cin >> n;
	vector<pair<pair<string, int>, int>> v;

	for (int i = 0; i < n; ++i) {
		string s; cin >> s;
		int p; cin >> p;
		v.push_back({{s, i}, p});
	}
	
	sort(all(v), [&](const auto &l, const auto &r) {
		if (l.first.first != r.first.first) return l.first.first < r.first.first;
		return l.second > r.second;
	});
	
	for (int i = 0; i < n; ++i) {
		cout << v[i].first.second + 1 << en;
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
