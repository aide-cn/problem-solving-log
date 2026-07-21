#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int A, B;
    cin >> A >> B;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            if (i % 2 == 0) {
                cout << "#";
            } else if (i % 4 == 1){
                if (j == (B - 1)) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            } else if (i % 4 == 3) {
                if (j == 0) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }
        cout << "\n";
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