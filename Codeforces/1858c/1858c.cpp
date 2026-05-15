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

const int SIZE = 1e5 + 1;
bool USED[SIZE];

void solve() {
    memset(USED, false, sizeof(USED));
    int n; cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; j *= 2) {
            if (USED[j]) break;
            USED[j] = true;
            cout << j << " ";
        }
    }
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