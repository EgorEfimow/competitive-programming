#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

// set<string> st;

// void brute(string &str) {
//     if (isz(str) == 27) return;
//     st.insert(str);
//     for (char c = 'a' + isz(str); c <= 'z'; ++c) {
//         string l = c + str;
//         string r = str + c;
//         brute(l);
//         brute(r);
//         break;
//     }
// }

void solve() {
    string s; cin >> s;
    
    string init = "";
    // brute(init);
    
    // char r = st.find(s) != st.end();
    // if (r) cout << "yes" << en;
    // else cout << "no" << en;

    for (char c = 'a', i = 0; i < isz(s); ++c, ++i) {
        string l = c + init, r = init + c;
        if (s.find(l) != string::npos) {
            init = l;
        }
        else if (s.find(r) != string::npos) {
            init = r;
        }
        else {
            cout << "no" << en;
            return;
        }
    }
    cout << "yes" << en;
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