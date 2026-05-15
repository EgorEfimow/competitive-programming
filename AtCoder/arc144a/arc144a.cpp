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

    cout << n * 2 << en;
    // how do we make largest EVEN number with sum equal to n?
    
    // can we say that M is 2 * n? and why?
    // because in best case (when there is no overflow) N -> 2*N
    // lets say we have number F = 11....1, then F * 2 = 22....2
    // f(F) = 1 * len(F); f(2*F) = 2 * (1 * len(F))
    // that imlies we have to build X using numbers 1..4 
    // (0 does not provide anyting and makes number bigger)

    // examples:
    // N = 5
    // 14 -> 28 <-> 10
    // N = 7
    // 34 -> 68 <-> 14

    // how do we build this number?
    // somehow...
    
    // just being greedy
    // N / 4 of '4'; 0 or 1 '3', '2', '1' (one of them)

    // 5 -> 14; 6 -> 24; 8 -> 44; 9 -> 144; 11 -> 344
    if (n < 4) cout << n << en;
    else {
        string suf(n / 4, '4');
        n -= (n / 4) * 4;
        if (n) cout << n;
        cout << suf << en;
    }
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