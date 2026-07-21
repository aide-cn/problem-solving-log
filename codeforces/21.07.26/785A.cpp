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

    string B;
    int C = 0;
    for (int i = 0; i < A; i++) {
        cin >> B;
        if (B == "Tetrahedron") {
            C += 4;
        } else if (B == "Cube") {
            C += 6;
        } else if (B == "Octahedron") {
            C += 8;
        } else if (B == "Dodecahedron") {
            C += 12;
        } else if (B == "Icosahedron") {
            C += 20;
        }
    }
    cout << C;
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