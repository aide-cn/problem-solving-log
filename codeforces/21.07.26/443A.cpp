#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    string A;
    getline(cin, A);
    set<string> B;
    stringstream ss(A);
    char a;
    string b;
    while (ss >> a) {
        if (a == '{' || a == '}' || a == ',') {
            continue;
        }
        ss.putback(a);
        if (ss >> b) {
            while (!b.empty() && (b.back() == ',' || b.back() == '}')) {
                b.pop_back();
            }
            if (!b.empty()) {
                B.insert(b);
            }
        }
    }
    cout << B.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}