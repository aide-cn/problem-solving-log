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
    vector<int> B(A); 
    for (int i = 0; i < A; i++) {
        cin >> B[i];
    }
    int maxidx = 0;
    int minidx = 0;

    for (int i = 0; i < A; i++) {
        if (B[i] > B[maxidx]) {
            maxidx = i;
        }
        if (B[i] <= B[minidx]) {
            minidx = i;
        }
    }
    int C = maxidx + (A - 1 - minidx);

    if (maxidx > minidx) {
        C--;
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