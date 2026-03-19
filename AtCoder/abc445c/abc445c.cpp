#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;

    vector<int> vc(n);
    for (int &elem : vc) cin >> elem;

    vector<int> ans(n);
    for (int i = 0; i < n; ++i) {
        // vc[i] -> vc[vc[i]] while next != cur
        if (ans[i] != 0) continue; 
        vector<int> idx;
        int next = vc[i] - 1;
        int cur = i;
        idx.push_back(i);
        while (next != cur) {
            cur = next;
            next = vc[cur] - 1;
            idx.push_back(cur);
        }
        for (int i = 0; i < isz(idx); ++i) {
            ans[idx[i]] = cur;
        }
    }
    for (int &elem : ans) cout << elem + 1 << " ";
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