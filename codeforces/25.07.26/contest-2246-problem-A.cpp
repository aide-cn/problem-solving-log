#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi p(n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            p[i] = i + 2;
        } else {
            p[i] = i;
        }
    }
    for (int i : p) {
        cout << i << " ";
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