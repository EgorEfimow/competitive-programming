#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'

using ll  = long long;
using pii = pair<int, int>;
using vi  = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vpii = vector<pii>;

template<typename T>
istream& operator>>(istream& in, vector<T>& a) {
    for (T& i : a) 
        in >> i;
    return in;
}

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& a) {
    for (const auto& i : a) { 
        out << i << " ";
    }
    return out;
}

void solve() {
    string s; cin >> s;
    int a, b; cin >> a >> b;

    int hours = (stoi(s.substr(0, 2)) + a) % 24;
    int minutes = (stoi(s.substr(3, 2)) + b);
    if (minutes >= 60) {
        hours += 1;
        hours %= 24;
        minutes %= 60;
    }

    string h = format("{:02d}", hours);
    string m = format("{:02d}", minutes);
    
    cout << h << ":" << m << en;
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
