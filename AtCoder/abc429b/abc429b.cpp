#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n, m;
    cin >> n >> m;
    
    int s = 0;
    vector<int> v(n);
    for (int &elem : v) {
        cin >> elem;
        s += elem;
    }
    if (find(v.begin(), v.end(), abs(m - s)) != v.end()) 
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