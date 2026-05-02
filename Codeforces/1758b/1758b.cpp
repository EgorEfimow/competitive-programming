#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int n; cin >> n;

    // cout << (1 ^ 2 ^ 3 ^ 2 ^ 2 ^ 2) << en;

    if (n % 2) {
        for (int i = 0; i < n; ++i)
            cout << 1 << " ";
        cout << en;
        return;
    }

    cout << "1 " << "3 ";
    for (int i = 0; i < n - 2; ++i) 
        cout << 2 << " ";
    cout << en;
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