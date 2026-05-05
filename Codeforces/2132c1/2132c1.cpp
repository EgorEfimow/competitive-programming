#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>

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

template<size_t N>
constexpr auto precompute() {
    array<ll, N> lookup {};

    ll init = 1;
    for (size_t i = 0; i < N; ++i) {
        lookup[i] = init;
        init *= 3;
    }
    return lookup;
}

void solve() {
    constexpr size_t SIZE = 20;
    constexpr array<ll, SIZE> powers = precompute<SIZE>();

    ll n, ans = 0; cin >> n;

    while (n) {
        auto bound = upper_bound(all(powers), n);
        ll dist = distance(powers.begin(), bound);
        if (n == 1 || n == 2) {
            ans += 3 * n;
            break;
        }
        n -= powers[dist - 1];
        ans += powers[dist] + (dist - 1) * powers[dist - 2];
    }
    cout << ans << en;
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