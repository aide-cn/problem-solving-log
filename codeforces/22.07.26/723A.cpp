#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    vi A(3);
    for (int i = 0; i < 3; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int B = (A[2] - A[0]);
    cout << B;
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