#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
	string s; cin >> s;
	
	map<char, int> mp;
	
	for (char &e : s) mp[e]++;
	
	if ((mp['N'] == 0 && mp['S']) || (mp['N'] && mp['S'] == 0) || (mp['E'] == 0 && mp['W'] || (mp['E'] && mp['W'] == 0)))
		cout << "No" << en;
	else cout << "Yes" << en;
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
