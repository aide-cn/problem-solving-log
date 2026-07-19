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
    if (A % B == 0) {
        cout << 0 << "\n";
        return;
    }
    ll C = B - (A % B);
    cout << C << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}