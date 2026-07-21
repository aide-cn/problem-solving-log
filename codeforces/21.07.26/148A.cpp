#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int A,B,C,D,E;
    int f = 0;
    cin >> A >> B >> C >> D >> E;

    for (int i = 1; i <= E; i++) {
        if (i % A == 0 || i % B == 0 || i % C == 0 || i % D == 0) {
            f++;
        }
    }
    cout << f;
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