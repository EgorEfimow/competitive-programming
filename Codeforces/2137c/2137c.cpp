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
#define vpii vector<pii>

void solve() {
    ll a, b; cin >> a >> b;

    // a even b odd -1                  good
    // a even b even                    
    // 1. b even && (b / 2) % 2 == 0    good
    // b / 2
    // 2. b even && (b / 2) % 2 == 1    good
    // b / 2
    // --------------------------------
    // a odd b even
    // 1. b even && (b / 2) % 2 == 0    
    // b / 2
    // 2. b even && (b / 2) % 2 == 1    
    // -1
    // a odd b odd
    // b
    if (a % 2 == 0 && b % 2) {
        cout << -1 << en;
    }
    else if ((a % 2 == 0 && b % 2 == 0) || (a % 2 && b % 2 == 0 && (b / 2) % 2 == 0)) {
        cout << a * (b / 2) + b / (b / 2) << en;
    }
    else if (a % 2 && b % 2 == 0 && (b / 2) % 2 == 1)
        cout << -1 << en;
    else cout << a * b + 1 << en;

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