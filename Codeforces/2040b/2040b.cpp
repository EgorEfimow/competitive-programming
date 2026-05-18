#include <algorithm>
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

const int SIZE = 33;
ll precompute[SIZE];

void solve() {
    int n; cin >> n;
    auto it = lower_bound(precompute, precompute + SIZE, n);
    cout << distance(precompute, it) << en;
}

int main() {
    memset(precompute, 0, sizeof(precompute));
    precompute[1] = 1; precompute[2] = 4; precompute[3] = 10;
    for (size_t i = 4; i < SIZE; ++i) {
        precompute[i] = precompute[i - 1] * 2 + 2;
    }

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}