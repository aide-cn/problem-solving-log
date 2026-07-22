#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    string A, B, C;
    cin >> A >> B >> C;
    A = A+B;
    if (A.length() > C.length()) {
        cout << "NO";
        return;
    }
    sort(A.begin(), A.end());
    sort(C.begin(), C.end());
    if (A == C) {
        cout << "YES";
    } else {
        cout << "NO";
    }
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