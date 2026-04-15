#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 1; i < 101; ++i) {
        if (a * i % b == c) {
            cout << "YES" << en;
            return;
        }
    }
    cout << "NO" << en;
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