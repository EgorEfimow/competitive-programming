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

int slow(vll &m, ll n, ll k) {
    ll s = 0;
    for (ll i = 0; i < isz(m); ++i) {
        s += 1ll*n - 1ll*m[i];
    }

    for (ll i = 0; i < isz(m); ++i) {
        if (s <= n - 1ll) {
            // break;
            return 1ll*k - i;
        }
        s -= (1ll*n - 1ll*m[i]);
    }
}

ll fast(vll &m, ll n, ll k) {
    vll suff(k + 1);

    for (ll i = k; i > 0; --i) {
        suff[i - 1] = 1ll*suff[i] + (1ll*n - 1ll*m[i - 1]);
    }

    ll bs = [&]() {
        ll lo = -1, hi = k;
        while (lo < hi - 1) {
            ll mi = (lo + hi) / 2ll;
            ll d = suff[mi] - suff[k];
            if (d > n - 1ll) {
                lo = mi;
            }
            else {
                hi = mi;
            }
        }
        return hi;
    }();

    return 1ll*k - bs;
} 

void stress() {
    // ll n, k;
    // mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

    // uniform_int_distribution<int> dist_n(2, 1e9);
    // n = dist_n(rng);
    
    // uniform_int_distribution<int> dist_elem(1, n - 1);
    // uniform_int_distribution<int> dist_k(1, 4e5);
    // k = dist_k(rng);
    
    // vll init(k);
    // for (ll &e : init) e = dist_elem(rng);
    // sort(all(init));

    // for (int i = 0; i < 1e4; ++i) {
    //     int sl = slow(init, n, k);
    //     int fs = fast(init, n, k);

    //     if (sl != fs) {
    //         cout << "TEST " << i << " FAILED" << en;
    //         cout << "EXPECTED: " << sl << en;
    //         cout << "GOT: " << fs << en;

    //         cout << "N: " << n << " K: " << k << en;
    //         cout << "POSITIONS: " << en;
    //         for (ll &e : init) cout << e << " ";
    //         cout << en;
    //         break;
    //     }
    // }   
    ll n, k; cin >> n >> k;
    vll v(k);
    for (ll &e : v) cin >> e;

    sort(all(v));

    cout << fast(v, n, k) << en;
}

// void solve() {
//     int n, k; cin >> n >> k;
    
//     vi pos(k);
//     for (int &e : pos) cin >> e;
    
//     sort(all(pos));
//     vi suff(k + 1);
    
//     for (int i = k; i > 0; --i) {
//         int q; cin >> q;
//         suff[i - 1] = suff[i] + (n - pos[i - 1]);
//     }

//     int bs = [&]() {
//         int lo = -1, hi = k - 1;
//         while (lo < hi - 1) {
//             int mi = (lo + hi) / 2;
//             int d = suff[mi] - suff[k];
//             if (d > n - 1) {
//                 lo = mi;
//             }
//             else {
//                 hi = mi;
//             }
//         }
//         return hi;
//     }();

//     cout << k - bs << en;
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        stress();
    }

    return 0;
}