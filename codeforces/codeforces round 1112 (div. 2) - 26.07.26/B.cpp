#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int n, k;
    cin >> n >> k;
    if (n == k+1) {
        cout << -1 << "\n";
        return;
    }
    int satu = (n + 1) / 2;
    int nol = n / 2;

    int one = (n - k + 1) / 2;
    int zero = (n - k) / 2;

    for (int i = 0; i < n-k; i++) {
        if (i == 0) {
            for (int j = 0; j < satu - one + 1; j++) {
                cout << 1;
            }
        } else if (i == 1) {
            for (int j = 0; j < nol - zero + 1; j++) {
                cout << 0;
            }
        } else {
            if (i % 2 == 0) {
                cout << 1;
            } else {
                cout << 0;
            }
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