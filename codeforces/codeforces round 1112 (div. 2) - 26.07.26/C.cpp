#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;

struct input {
    int l,r,u,v;
};

void solve() {
    int n;
    cin >> n;
    vector<input> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].l >> a[i].r >> a[i].u >> a[i].v;
    }
    for (int m = n; m >= 1; m--) {
        int j = 1;
        for (int i = 0; i < n; i++) {
            if ((j < a[i].l || j > a[i].r) && ((m - j + 1) < a[i].u || (m - j + 1) > a[i].v)) {
                j++;
            }
            if (j > m) {
                cout << m << "\n";
                return;
            }
        }
    }
    cout << 0 << "\n";
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