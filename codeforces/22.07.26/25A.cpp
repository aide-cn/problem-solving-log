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

    vi even;
    vi odd;
    vi B(A);
    for (int i = 0; i < A; i++) {
        cin >> B[i];
        if (B[i] & 1) {
            odd.push_back(i);
        } else {
            even.push_back(i);
        }
    }
    vi& C = (even.size() > odd.size()) ? odd : even;
    for (int a : C) {
        cout << (a + 1);
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