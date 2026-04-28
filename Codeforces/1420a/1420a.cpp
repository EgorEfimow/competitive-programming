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

ll cnt = 0;

void merge(vi &arr, int l, int m, int r) {
    int n = m - l;
    int q = r - m;

    vi left(n + 1), right(q + 1);

    for (int i = 0; i < n; ++i) left[i] = arr[l + i];
    for (int i = 0; i < q; ++i) right[i] = arr[m + i];

    left.back() = 1e9; right.back() = 1e9;

    int i = 0, j = 0;
    for (int k = l; k < r; ++k) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
            cnt += n - i;
        }
    }
}

void mergesort(vi &v, int lo, int hi) {
    if (lo + 1 >= hi) return;

    int mid = (lo + hi) / 2;
    mergesort(v, lo, mid);
    mergesort(v, mid, hi);
    merge(v, lo, mid, hi);
}

void solve() {
    ll n; cin >> n;
    vi v(n);
    
    for (int &e : v) cin >> e;

    mergesort(v, 0, n);

    cout << ((cnt > 1ll * n * (n - 1) / 2 - 1) ? "NO" : "YES") << en;

    cnt = 0;

    // time to learn about merge sort
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