#include <bits/stdc++.h>
#include <string>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n, maxlen = 0;
    cin >> n;
    vector<string> vc(n);
    
    for (string &elem : vc) {
        cin >> elem;
        if (isz(elem) > maxlen) 
            maxlen = isz(elem);
    }
    for (int i = 0; i < n; ++i) {
        int padding = maxlen - isz(vc[i]);
        cout << string(padding / 2, '.') << vc[i] << string(padding / 2, '.') << en;
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