#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int a;
    cin >> a;
    vi A(a);
    int crime = 0;
    int police = 0;
    for (int i = 0; i < a; i++) {
        cin >> A[i];
        if (A[i] == -1) {
            crime++;
            if (police > 0) {
                crime--;
                police -= 1;
            }
        } else {
            police += A[i];
        }
    }
    cout << crime;
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