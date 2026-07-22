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
    int B[A], C[A];
    for (int i = 0; i < A; i++) {
        cin >> B[i] >> C[i];
    }
    int D = 0;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < A; j++) {
            if (B[i] == C[j]) {
                D++;
            }
        }
    }
    cout << D;
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