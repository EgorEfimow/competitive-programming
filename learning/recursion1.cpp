#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

double recSolve(vector<double> &v) {
    if (isz(v) == 1) return v[0];
    double maxfound;
    for (int i = 0; i < isz(v); ++i) {
        for (int j = i + 1; j < isz(v); ++j) {
            double val = (v[i] + v[j]) / 2;
            vector<double> nv(v);
            nv.erase(nv.begin() + i);
            nv.erase(nv.begin() + j - 1);
            nv.push_back(val);
            maxfound = max(maxfound, recSolve(nv));
        }
    }
    return maxfound;
}

void solve() {
    int n;
    cin >> n;

   vector<double> v(n);
   for (double &e : v) cin >> e;

   double maxfound = recSolve(v);

   cout << maxfound << en;
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
