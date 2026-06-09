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

#pragma region TEMPLATES

template<typename T>
istream &operator>>(istream &in, vector<T> &a) {
    for (T &i: a) in >> i;
    return in;
}

template<typename T>
ostream &operator<<(ostream &out, const vector<T> &a) {
    for (auto i: a) {
        out << i << " ";
    }
    return out;
}

#pragma endregion


void solve() {
    
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