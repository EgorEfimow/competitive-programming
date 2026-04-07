#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
	int n; cin >> n;
	int arr[100001] = {};

	int steps[6] = {100, 101, 102, 103, 104, 105};
	
	for (int i = 0; i < 6; ++i) arr[steps[i]] = 1;
	
	for (int i = 106; i < 1e5 + 1; ++i) {
		char r = 0;
		for (int j = 0; j < 6; ++j) {
			r |= arr[i - steps[j]];
		}
		if (r) arr[i] = 1;
	}
	cout << arr[n] << en;
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
