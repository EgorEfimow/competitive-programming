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
    string s; cin >> s;

    int cnt1 = 0, cnt0 = 0;
    for (int i = 0; i < isz(s); ++i) {
        if (s[i] == '1') cnt1++;
        else {
            cnt0++;
            int j;
            for (j = i; j < n; ++j) {
                if (s[j] == '1') break;
            }
            i = j - 1;
        }
    }
    cout << (cnt1 > cnt0 ? "Yes" : "No") << en;
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