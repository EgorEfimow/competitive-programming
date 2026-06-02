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
    string s; cin >> s;

    int ans = 0;
    int cnt13 = 0;

    for (char &c : s) {
        if (c == '4')
            ans++; 
        else if (c == '1' || c == '3')
            cnt13++;
        else
            if (cnt13 > 0) {
                ans++;
                cnt13--;
            }
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