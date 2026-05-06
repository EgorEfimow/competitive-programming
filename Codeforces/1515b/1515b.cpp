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

    if (n % 2) cout << "NO" << en;
    else {
        auto root = [](const int v) {
            for (int i = 1; i * i <= v; ++i) {
                if (i * i == v) return true; 
            }
            return false;
        };
        bool q1 = root(n / 2), q2 = (n / 2 % 2) ? 0 : root(n / 4);
        if (q1 || q2) cout << "YES" << en;
        else cout << "NO" << en;
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