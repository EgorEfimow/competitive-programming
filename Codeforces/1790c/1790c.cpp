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
    vector<map<int, int>> vmp(n - 1);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            int q; cin >> q;
            vmp[j][q]++;
        }
    }

    int prev;
    for (int i = 0; i < isz(vmp); ++i) {
        if (i == 0) {
            if (vmp[i].begin()->second > vmp[i].rbegin()->second) {
                cout << vmp[i].begin()->first << " " << vmp[i].rbegin()->first << " ";
                prev = vmp[i].rbegin()->first;
            }
            else {
                cout << vmp[i].rbegin()->first << " " << vmp[i].begin()->first << " "; 
                prev = vmp[i].begin()->first;
            }
            continue;
        }
        if (vmp[i].begin()->first == prev) {
            cout << vmp[i].rbegin()->first << " ";
            prev = vmp[i].rbegin()->first;
        }
        else {
            cout << vmp[i].begin()->first << " ";
            prev = vmp[i].begin()->first;
        }
    }
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