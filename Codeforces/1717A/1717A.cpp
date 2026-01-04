#include <bits/stdc++.h>
// #include <numeric>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'

long brute(int n){
    long ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (lcm(i, j) / gcd(i, j) <= 3) {
                ans++;
            }
        }
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;

    // cout << brute(n) << en;

    cout << n + 2 * (n / 2) + 2 * (n / 3) << en; 

    // lcm * gcd = x*y
    // lcm / gcd <= 3
    // количество совпадающих чисел от 1 до н
    // 

    // 1 2
    // 1 3
    // 2 1
    // 3 1
    // 

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
