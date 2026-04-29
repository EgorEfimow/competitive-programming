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

    vector<char> used(n, 0);

    // check all subsequences
    for (int i = 1; i <= n / 2; i += 2) {
        set<int> val;
        set<int> pos;
        for (int j = i; j <= n; j *= 2) {
            val.insert(v[j - 1]);
            pos.insert(j);
            used[j - 1] = 1;
        }
        if (val != pos) {
            cout << "no" << en;
            return;
        }
    }

    // check odds in second half
    for (int i = n / 2 + 1; i < n; ++i) {
        if (v[i] % 2 && v[i] != i + 1 && !used[i]) {
            cout << "no" << en;
            return;
        }
    }
    cout << "yes" << en;
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