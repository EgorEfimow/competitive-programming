#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    string s; cin >> s;

    auto check = [&](string &mask, int &t) {
        int res = s[0] - '0';
        for (int i = 0; i < isz(mask); ++i) {
            if (mask[i] == '1') res += s[i + 1] - '0';
            else res -= s[i + 1] - '0';
        }
        if (res != t) return false; 
        return true;
    };

    for (int i = 0; i < 8; ++i) {
        string str = bitset<3>(i).to_string();
        int target = 7;
        if (!check(str, target)) continue;
        cout << s[0];
        for (int j = 1; j < isz(s); ++j) {
            cout << (str[j - 1] == '1' ? "+" : "-") << s[j];
        }
        break;
    }
    cout << "=7" << en;
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