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
    int n; cin >> n;
    string top; string bot;
    cin >> top >> bot;

    set<int, less<int>> points_less;
    set<int, greater<int>> points_greater;

    for (int i = 0; i < n; ++i) 
        if (top[i] == '.' || bot[i] == '.') {
            points_less.insert(i);
            points_greater.insert(i);
        }

    int ans = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (top[i] == '.' && bot[i] == '.') {
            if ((bot[i - 1] == 'x' && bot[i + 1] == 'x') && 
                points_greater.upper_bound(i) != points_greater.end() && 
                points_less.upper_bound(i) != points_less.end())
                ans++; 

            if ((top[i - 1] == 'x' && top[i + 1] == 'x') && 
                points_greater.upper_bound(i) != points_greater.end() && 
                points_less.upper_bound(i) != points_less.end())
                ans++; 
        }
    }

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