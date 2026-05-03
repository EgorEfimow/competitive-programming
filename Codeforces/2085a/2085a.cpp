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
    string s; cin >> s;

    string sr(s);
    reverse(all(sr));

    if (s < sr) {
        cout << "yes" << en;
        return;
    }

    set<char> st(all(s));

    if (isz(st) == 1) {
        cout << "no" << en;
        return;
    }
    if (k >= 1) 
        cout << "yes" << en;
    else  
        cout << "no" << en;
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