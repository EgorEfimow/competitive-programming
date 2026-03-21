#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    vector<int> vc = {a, b, c, d};
    sort(vc.begin(), vc.end());

    if ((vc[3] == (vc[0] + vc[1] + vc[2])) || ((vc[3] + vc[0]) == vc[1] + vc[2])) 
        cout << "Yes" << en;
    else 
        cout << "No" << en;
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