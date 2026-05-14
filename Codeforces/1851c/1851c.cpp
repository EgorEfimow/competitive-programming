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
    int n, k; cin >> n >> k;
    vi v(n);
    unordered_map<int, int> mp;
    for (int &e : v) {
        cin >> e;
        mp[e]++;
    }

    // need to check 1 and 2. 
    // if cannot 2 then cannot at all 
    // (if we can make 3 blocks then there is first and last blocks => can make 2 blocks)
    // if we can make 2 it doesnt imply that we can make 1
    // lets sat v = 2, 2, 1, 1 and k = 2 we cannot make single block but can make 2 blocks
    // thats why we have to check 2 and 1 separately

    // check 1
    if (v.back() == v[0] && mp[v[0]] >= k) {
        cout << "yes" << en;
        return;
    }
    // check 2
    int cntl = 0, cntr = 0, pos;
    for (int i = 0; i < n && cntl < k; ++i) {
        if (v[i] == v[0]) {
            cntl++;
            pos = i;
        }
    }
    for (int i = pos; i < n && cntr < k; ++i) {
        if (v[i] == v.back()) cntr++;
    }
    if (cntl == k && cntr == k) cout << "yes" << en;
    else cout << "no" << en;
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