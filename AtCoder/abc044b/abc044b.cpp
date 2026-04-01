#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int arr[26] = {};

    string s;
    cin >> s;

    for (char &e : s) {
        arr[e % 'a']++;
    }

    for (int &e : arr)
        if (e & 1) {
            cout << "No" << en;
            return;
        }

    cout << "Yes" << en;
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