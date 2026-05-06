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
    int n, s; cin >> n >> s;
    vector<pii> v;

    for (int i = 0; i < n; ++i) {
        int q; cin >> q;
        v.emplace_back(q, i);
    }
    sort(all(v));

    int left = 0, right = n - 1;
    while (left < right) {
        int sum = v[left].first + v[right].first;
        if (sum < s) left++;
        else if (sum > s) right--;
        else {
            cout << v[left].second + 1 << " " << v[right].second + 1 << en;
            return;
        }
    }
    cout << "IMPOSSIBLE" << en;
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