#include <bits/stdc++.h>
#include <set>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

const int SIZE = 1E5;
int MEMO[SIZE] = {};

bool check(multiset<int> &mst, int mex) {
    multiset<int> cpMST(mst);
    for (int i = mex - 1; i >= 0; --i) {
        auto itSELF = cpMST.find(i);
        auto itBIGGER = cpMST.lower_bound(2*i + 1);

        if (itSELF == cpMST.end() && itBIGGER == cpMST.end()) 
            return false;

        if (itSELF != cpMST.end()) 
            cpMST.erase(itSELF);
        else if (itBIGGER != cpMST.end()) 
            cpMST.erase(itBIGGER);
    }
    return true;
}

void solve() {
    int n; cin >> n;
    vi v(n);
    for (int &e : v) cin >> e;

    multiset<int> m;
    for (int &e : v) m.insert(e);

    int res = [&]() -> int {
        int lo = 0, hi = n + 1, ans;
        while (lo < hi) {
            int mi = (lo + hi) / 2;
            if (check(m, mi)) {
                lo = mi + 1;
                ans = mi;
            }
            else 
                hi = mi;
        }
        return ans;
    }();

    cout << res << en;
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