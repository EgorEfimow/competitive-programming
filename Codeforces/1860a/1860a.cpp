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

void solve() {
    string s; cin >> s;
    int len = 2 * isz(s);

    string ls1(len / 2, '(');
    string rs1(len / 2, ')');
    string s1 = ls1 + rs1;

    string s2 = "";

    for (int i = 0; i < len / 2; ++i)
        s2 += "()";

    if (s1.find(s) == string::npos) {
        cout << "YES" << en;
        cout << s1 << en;
        return;
    }
    if (s2.find(s) == string::npos) {
        cout << "YES" << en;
        cout << s2 << en;
        return;
    }
    cout << "NO" << en;
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