#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    string A;
    cin >> A;
    transform(A.begin(), A.end(), A.begin(), [](unsigned char b) {
        return tolower(b);
    });
    if (A == "yes") {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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