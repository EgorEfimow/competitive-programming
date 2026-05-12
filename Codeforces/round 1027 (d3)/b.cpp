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

    int cnt1 = 0, cnt0 = 0;
    for (char &c : s) 
        if (c == '1') cnt1++;
        else cnt0++;
    
    // we can make min(cnt0, cnt1) bad pairs and 
    // max(cnt1, cnt0) - min(cnt1, cnt0) good pair

    // to make K pair we need K * 2 good -> N - K*2 bad values -> 

    for (int i = 0; i < k; ++i) {
        if (cnt1 > cnt0) cnt1 -= 2;
        else cnt0 -= 2;
    }

    if (cnt1 != cnt0) cout << "no" << en;
    else cout << "yes" << en;
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