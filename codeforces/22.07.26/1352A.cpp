#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    string A;
    cin >> A;

    int B = 0;
    for (char C : A) {
        if (C != '0') {
            B++;
        }
    }
    cout << B << "\n";

    for (int i = 0; i < A.length(); i++) {
        if (A[i] != '0') {
            cout << A[i];
            for (int j = 1; j < (A.length() - i); j++) {
                cout << '0';
            }
            cout << " ";
        }
    }
    cout << "\n";
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