#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int n, m;
    cin >> n >> m;
    vi f(m);
    for(int i = 0; i < m; i++) {
        cin >> f[i];
    }
    sort(f.begin(), f.end());
    int min_diff = 1e9;
    for(int i = 0; i <= m - n; i++) {
        int diff = f[i + n - 1] - f[i];
        min_diff = min(min_diff, diff);
    }
    cout << min_diff;
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