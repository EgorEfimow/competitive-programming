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
    bool used[1001];
    
    int n; cin >> n;
    vi v(n); for (int &e : v) cin >> e;
    
    for (int i = 1; i < n + 1; ++i) {
        memset(used, false, sizeof(used));
        used[i] = 1;
        int st = v[i - 1];
        while (1) {
            if (used[st]) {
                cout << st << " ";
                break;
            }
            used[st] = 1;
            st = v[st - 1];
        }
    }
    cout << en; 
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