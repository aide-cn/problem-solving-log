#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int k;
    cin >> k;
    vi c(k);
    for (int &x : c) cin >> x;
    int sum = accumulate(c.begin(), c.end(), 0);
    if (k == sum || k + 1 == sum) {
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
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