#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    vector<int> b(n);

    for (int &elem : a) cin >> elem;
    for (int &elem : b) cin >> elem;

    queue<int> q;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < a[i]; j++) q.push(i);
        for (int j = 0; j < b[i]; j++) q.pop();
        while ((!q.empty()) && (q.front() == (i - d))) q.pop();
    }
    cout << q.size() << en;
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