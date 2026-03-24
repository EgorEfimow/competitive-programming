#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

// platform independent, for gcc use __lg()
int lg2(const int &x){return 31 - __builtin_clz(x);}
long long int lg2(const long long int &x){return 63 - __builtin_clzll(x);}

void solve() {
    int n;
    cin >> n;

    cout << pow(2, __lg(n)) << en;
    cout << pow(2, lg2(n)) << en;
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