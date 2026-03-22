#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) 
        cout << i << " ";
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