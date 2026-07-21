#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int A;
    cin >> A;

    map<string, int> B;
    for (int i = 0; i < A; i++) {
        string C;
        cin >> C;

        if (B[C] == 0) {
            cout << "OK" << "\n";
            B[C] = 1;
        } else {
            cout << C << B[C] << "\n";
            B[C]++;
        }
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