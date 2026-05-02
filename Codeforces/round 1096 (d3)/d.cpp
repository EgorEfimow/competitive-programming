#include <bits/stdc++.h>

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

int getMEX(vi &vmex) {
    sort(all(vmex));
    int res = 0;
    for (int i = 0; i < isz(vmex); ++i) {
        if (vmex[i] == i) res++;
        else break;
    }
    return res;
}

void solve() {
    int n; cin >> n;
    vi v(2 * n);
    int p1, p2;
    char found = 0;
    for (int i = 0; i < isz(v); ++i) {
        int e; cin >> e;
        v[i] = e;
        if (e == 0 && !found) {
            found = 1; p1 = i;
        }
        else if (e == 0 && found) {
            p2 = i;
        }
    }
    
    vi palp1, palp2, peven;

    found = 0;
    int start, end;
    for (int i = 0; i < isz(v); ++i) {
        if (v[i] == 0) {
            found = 1;
            start = i;
            for (int j = i + 1; j < isz(v); ++j) {
                end = j;
                if (v[j] == 0)
                    break;
            }
        }
        if (found)
            break;
    }
    bool isPal = true;
    int s = start, e = end, i = 0;
    while (s + i <= e - i) {
        if (v[s + i] != v[e - i]) {
            isPal = false; 
            break;
        }
        i++;
    }

    if (!isPal) {
        auto getlen = [&](int pos, int rad, vi &pal) -> void {
            int l = pos, r = pos, radius = rad;

            while ((l - radius >= 0) && (r + radius < 2 * n)) {
                if (v[l - radius] == v[r + radius]) {
                    pal.push_back(v[l - radius]);
                    radius++;
                }
                else break;
            }
        };

        palp1.push_back(0);
        palp2.push_back(0);
        
        getlen(p1, 1, palp1);
        getlen(p2, 1, palp2);
    }
    
    if (isPal) {
        set<int> st;
        int l = start, r = end, radius = 1;

        while ((l - radius >= 0) && (r + radius < 2 * n)) {
            if (v[l - radius] == v[r + radius]) {
                radius++;
            }
            else break;
        }
        
        for (int i = l - radius + 1; i < r + radius - 1; ++i) {
            st.insert(v[i]);
        }
        peven = vector<int>(all(st));
    }

    int even = getMEX(peven);
    int pp1 = getMEX(palp1), pp2 = getMEX(palp2);

    int ans = max(even, max(pp1, pp2));
    cout << ans << en;
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