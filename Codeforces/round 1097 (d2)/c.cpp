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
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int cnt_a = 0, cnt_b = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            if (a[i] == '(') {
                cnt_a++;
                cnt_b++;
            } else {
                cnt_a--;
                cnt_b--;
            }
        } 
        else {
            if (cnt_a < cnt_b) {
                cnt_a++;
                cnt_b--;
            } else {
                cnt_a--;
                cnt_b++;
            }
        }

        if (cnt_a < 0 || cnt_b < 0) {
            cout << "NO" << en;
            return;
        }
    }

    if (cnt_a == 0 && cnt_b == 0) cout << "YES" << en;
    else cout << "NO" << en;
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