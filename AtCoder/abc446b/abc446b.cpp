#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

int arr[100];

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) arr[i] = 1;

    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        int ans = 0;
        vector<int> vc(l);
        for (int &elem : vc) cin >> elem;
        for (int i = 0; i < l; ++i) {
            if (arr[vc[i]-1] == 1) {
                ans = vc[i];
                arr[vc[i] - 1] = 0;
                break;
            }
        }
        cout << ans << en;
    }
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