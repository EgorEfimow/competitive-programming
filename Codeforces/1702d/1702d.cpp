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
    vector<pair<char, int>> v;
    vector<pair<char, int>> result;

    string s; cin >> s;
    int p; cin >> p;

    for (int i = 0; i < isz(s); ++i)
        v.pb({s[i], i});

    sort(all(v));
    
    ll sum = 0;
    for (int i = 0; i < isz(v); ++i) {
        if (sum + (v[i].first - 'a' + 1) <= p) {
            sum += (v[i].first - 'a' + 1);
            result.push_back(v[i]);
        }
    }

    sort(all(result), [&](auto l, auto r) {
        return l.second < r.second;
    });

    for (int i = 0; i < isz(result); ++i) 
        cout << result[i].first;
    cout << en;
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