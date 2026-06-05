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
    vi v(n); for (int &e : v) cin >> e;

    
    auto check = [](const vi &arr) {
        for (int i = 0; i < isz(arr); ++i) {
            if (arr[i] != arr[isz(arr) - i - 1]) 
            return false;
        }
        return true;
    };

    if (check(v)) {
        cout << "yes" << en;
        return;
    }

    int pos = -1;
    for (int i = 0; i < isz(v); ++i) {
        if (v[i] != v[n - i - 1]) {
            pos = i;
            break;
        }
    }

    int ch1 = v[pos], ch2 = v[n - pos - 1];

    vi rch1, rch2;
    for (int i = 0; i < isz(v); ++i) {
        if (v[i] == ch1) continue;
        rch1.pb(v[i]);
    }

    for (int i = 0; i < isz(v); ++i) {
        if (v[i] == ch2) continue;
        rch2.pb(v[i]);
    }

    if (check(rch1) || check(rch2)) 
        cout << "yes" << en;
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