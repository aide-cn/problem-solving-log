#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi w(n);
    for (int &x : w) cin >> x;
    if (n % 2 != 0) {
        cout << "NO" << "\n";
        return;
    }
    int minl = INT_MAX;
    int maxl = INT_MIN;
    for (int i = 0; i < n; i+=2) {
        minl = min(minl, w[i]);
        maxl = max(maxl, w[i+1]);   
    }
    if (maxl < minl - 1) {
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