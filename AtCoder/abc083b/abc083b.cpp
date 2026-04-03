#include <bits/stdc++.h>
 
using namespace std;
 
#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 
 
void solve() {
    int n, a, b; cin >> n >> a >> b;
 
    auto check = [&](int v) {
    	int s = 0;
    	while (v) {
    		s += v % 10;
    		v /= 10;
    	}
    	return (s >= a) && (s <= b);
    };
 
    int ans = 0;
 
    for (int i = 1; i <= n; ++i) {
    	if (!check(i)) continue;
    	ans += i;
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