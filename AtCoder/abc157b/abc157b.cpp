#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

bool checkDiag(vector<vector<int>> &v, vector<int> &b) {
    vector<int> mainDiag = {v[0][0], v[1][1], v[2][2]};
    vector<int> secondDiag = {v[2][0], v[1][1], v[0][2]};

    bool found1 = true, found2 = true;
    for (int &elem : mainDiag) {
        if (find(b.begin(), b.end(), elem) == b.end()) {
            found1 = false;
            break;
        }
    }

    for (int &elem : secondDiag) {
        if (find(b.begin(), b.end(), elem) == b.end()) {
            found2 = false;
            break;
        }
    }

    return (found1 || found2);
}

bool iterOverRow(vector<vector<int>> &v, vector<int> &b) {
    for (int i = 0; i < 3; ++i) {
        bool found = true;
        for (int j = 0; j < 3; ++j) {
            if (find(b.begin(), b.end(), v[j][i]) == b.end()) {
                found = false;
                break;
            };
        }
        if (found)
            return true;
    }
    return false;
}

bool iterOverStr(vector<vector<int>> &v, vector<int> &b) {
    for (int i = 0; i < 3; ++i) {
        bool found = true;
        for (int j = 0; j < 3; ++j) {
            if (find(b.begin(), b.end(), v[i][j]) == b.end()) {
                found = false;
                break;
            };
        }
        if (found)
            return true;
    }
    return false;
}

void solve() {
    // authors solution using visited 2d array much shorted and more easy to understand
    int n;
    vector<vector<int>> vvi(vector<vector<int>>(3, vector<int>(3)));

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> vvi[i][j];
        }
    }

    cin >> n;
    vector<int> v(n);
    for (int &elem : v) cin >> elem;

    bool res = (iterOverStr(vvi, v) || checkDiag(vvi, v) || iterOverRow(vvi, v));

    if (res) cout << "Yes" << en;
    else cout << "No" << en;
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