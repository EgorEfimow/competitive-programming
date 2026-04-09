#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void brute(int v) {
    for (int i = 1; i < v - 3; ++i) {
        for (int j = 1; j < v - 3; ++j) {
            for (int k = 1; k < v - 3; ++k) {
                if ((i + j + k == v) && i != j && j != k && i != k && i % 3 && j % 3 && k % 3)
                    cout << i << " " << j << " " << k << en;
            }
        }
    }
}

void solve() {
    int n; cin >> n;

    // brute(n);

    // fix 1, 2 iter over 2nd, calc 3rd
    for (int i = 2; i * i <= 1e4; ++i) {
        if (i % 3 && (n - i - 1) % 3 && i != 1 && i != (n - i - 1) && (n - i - 1) != 1 && (n - i - 1) > 0) {
            cout << "yes" << en;
            cout << 1 << " " << i << " " << n - i - 1 << en;
            return;
        }
    }
    set<int> st;
    for (int i = 1; i * i <= 1e4; ++i) {
        if (i == 2) continue;
        if (i % 3 && (n - i - 2) % 3 && i != 2 && i != (n - i - 2) && (n - i - 2) != 2 && (n - i - 2) > 0) {
            cout << "yes" << en;
            cout << 2 << " " << i << " " << n - i - 1 << en;
            return;
        }
    }
    cout << "no" << en;
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