#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int n, c;
    cin >> n >> c;
    vi a(n);
    vi b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    bool rearrange = false;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            rearrange = true;
            break;
        }
    }
    int result = 0;
    if (rearrange) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                cout << -1 << "\n";
                return;
            }
        }
        for (int i = 0; i < n; i++) {
            result += (a[i] - b[i]);
        }
        cout << c + result << "\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        result += (a[i] - b[i]);
    }
    cout << result << "\n";
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