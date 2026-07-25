#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    if (n == 1) {
        cout << n;
    } else if (n == 2) {
        cout << -1;
    } else {
        ll a = 3;
        for (ll i = 1; i <= n; i++) {
            if (i > 3) {
                a*=2;
                cout << a << " ";
            } else {
                cout << i << " ";
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