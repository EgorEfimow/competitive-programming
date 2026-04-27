#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int, int>

void solve() {
    int n; cin >> n;

    int arr[1001] = {};

    for (int i = 0; i < n; ++i) {
        int a, b, c; cin >> a >> b >> c;
        for (int j = a; j <= b; ++j) arr[j] += c;
    }
    cout << *max_element(arr, arr + 1001) << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("blist.out", "w", stdout);
    freopen("blist.in", "r", stdin);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}