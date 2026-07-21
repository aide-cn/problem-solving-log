#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int A;
    cin >> A;
    for (int i = 0; i < A; i++) {
        int B;
        cin >> B;
        if (B % 2 == 0) {
            B = (B / 2) - 1;
        } else {
            B = (B / 2);
        }
        cout << B << "\n";
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