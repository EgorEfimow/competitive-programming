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
    vi v(n);
    for (int &e : v) cin >> e;
    sort(all(v));

    int mx = 1, towers = n;
    
    int left = 0, right = 1;
    while (right < n) {
        while (right < n && v[right] == v[left]) {
            mx = max(mx, right - left + 1);
            right++;
            towers--;
        } 
        left = right;
        right++;
    }
    cout << mx << " " << towers << en;
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