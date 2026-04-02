#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    int cnto = 0;
    for (int &e : v) {
        cin >> e;
        if (e & 1) cnto++;
    }

    if (n != cnto && cnto != 0) {
        sort(all(v));
        for (int &e : v) cout << e << " ";
        cout << en;
    }
    else {
        for (int &e : v) cout << e << " ";
        cout << en;
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