#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    ll x;
    cin >> x;
    int y = 1;
    while (x > 0) {
        x /= 10;
        y *= 10;
    }
    y++;
    cout << y << "\n";
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