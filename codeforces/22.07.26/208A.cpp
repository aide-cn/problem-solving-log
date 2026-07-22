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
    string B = "WUB";
    size_t C = A.find(B);
    while (C != string::npos) {
        if (C > 0 && A[C - 1] != ' ') {
            A.replace(C, B.length(), " ");
        } else {
            A.erase(C, B.length());
        }
        C = A.find(B);
    } 
    cout << A;
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