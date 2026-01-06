#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int v, t;
    cin >> v >> t;

    ll s = v * t;
    ll pos = s % 109;

    if (pos < 0) {
        pos = pos + 109; // Сдвигаем отрицательный индекс в положительную зону
    }

    // Результат pos теперь всегда в диапазоне [0, 108]
    cout << pos + 1 << en;
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