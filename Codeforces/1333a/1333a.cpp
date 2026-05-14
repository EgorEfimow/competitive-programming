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
    int n, m; cin >> n >> m;
    if ((n * m) % 2) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i % 2 == 0) {
                    if (j % 2 == 0) cout << "B";
                    else cout << "W";
                }
                else  {
                    if (j % 2 == 0) cout << "W";
                    else cout << "B";
                }
            }
            cout << en;
        }
    }
    else {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i % 2 == 0) {
                    if (j % 2 == 0) cout << "B";
                    else cout << "W";
                }
                else  {
                    if (j % 2 == 0) cout << "W";
                    else cout << "B";
                }
            }
            cout << en;
        }
        if (n % 2 == 0 && m % 2 == 0) {
            cout << "B";
            for (int i = 1; i < m; ++i) {   
                if (i % 2 == 1) cout << "B";
                else cout << "W";
            }
            cout << en;
            return;
        }
        if (n % 2) {
            for (int i = 0; i < m - 1; ++i) {
                if (i % 2 == 0) cout << "B";
                else cout << "W";
            }
            cout << "B" << en;
        }
        else {
            for (int i = 0; i < m - 1; ++i) {
                if (i % 2 == 0) cout << "W";
                else cout << "B";
            }
            cout << "B" << en;
        }
    }
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