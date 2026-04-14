#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    string s; cin >> s;

    // <>>
    // if < - 0 is initial value
    // 0 1 but after that we got >> 
    // so we have to do 0 2 1 0 

    // <>>><<><<<<<>>><
    // 01000120123450001
    // 03210010000032100
    
    ll ans = 0;

    vll a(isz(s) + 1);

    for (int i = 0; i < isz(s); ++i) {
        if (s[i] == '<')
            a[i + 1] = max(a[i + 1], a[i] + 1);
    }
    for (int i = isz(s) - 1; i >= 0; --i) {
        if (s[i] == '>')
            a[i] = max(a[i], a[i + 1] + 1);
    }
    ans = accumulate(all(a), 0ll);
    
    cout << ans << en;
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