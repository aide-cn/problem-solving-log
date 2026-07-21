#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int A;
    cin >> A;
    vi B(A);
    for (int i = 0; i < A; i++) {
        cin >> B[i];
    }
    int max_seg = 1;
    int current = 1;
    for (int i = 1; i < A; i++) {
        if (B[i] >= B[i - 1]) {
            current++;
        } else {
            current = 1;
        }
        max_seg = max(max_seg, current);
    }
    cout << max_seg;
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