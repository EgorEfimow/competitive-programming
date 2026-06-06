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
#define vpii vector<pii>

void solve() {
    auto cmp = [](auto l, auto r) -> bool {
        return l.second > r.second;
    };
    priority_queue<pii, vpii, decltype(cmp)> pq;

    int n; cin >> n;
    vpii v(n);
    for (auto &e : v)
        cin >> e.first >> e.second;

    sort(all(v));
    
    for (auto &e : v) {
        if (pq.empty()) {
            pq.push(e);
            continue;
        }

        if (e.first >= pq.top().second) {
            pq.pop();
        }
        pq.push(e);
    }

    cout << isz(pq) << en;
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