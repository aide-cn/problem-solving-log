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
    for (int i = 1; i <= A; i++) {
        if (i % 2 != 0) cout << "I hate";
        else cout << "I love";

        cout << (i == A ? " it" : " that ");
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