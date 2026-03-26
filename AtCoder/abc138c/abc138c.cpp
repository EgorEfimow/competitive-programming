#include <bits/stdc++.h>
#include <iomanip>
#include <ios>
#include <vector>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;

   vector<int> v(n);
   for (int &e : v) cin >> e;

   sort(all(v));

   double ans = v[0];
   for (int i = 1; i < isz(v); ++i) ans = (ans + v[i]) / 2; 

   cout << fixed << setprecision(15) << ans << en;
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