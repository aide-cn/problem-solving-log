#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int A;
    int B;
    vector<int> C;
    cin >> A;
    for (int i = 0; i < A; i++) {
        cin >> B;
        C.push_back(B);
    }
    sort(C.begin(), C.end());
    for (int i = 0; i < C.size(); i++) {
        cout << C[i] << (i == (C.size() - 1) ? "" : " "); 
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