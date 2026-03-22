#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    string a, b;
    cin >> a >> b;

    int i = 2;
    while (i * i < stoi(a + b)) {
        i++;
    } 
    if (i * i == stoi(a + b)) cout << "Yes" << en;
    else cout << "No" << en;
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