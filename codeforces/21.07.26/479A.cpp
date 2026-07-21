#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int A,B,C;
    cin >> A >> B >> C;
    int D = max({
        A*B*C,
        A+B+C,
        A+B*C,
        A*B+C,
        A*(B+C),
        (A+B)*C
    });
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