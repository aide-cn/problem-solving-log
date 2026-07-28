#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void porty() {
    int n, k;
    cin >> n >> k;
    int l = 240 - k;
    int mins = 0;
    for (int i = 1; i <= n; i++) {
        mins += 5 * i;
        if (mins > l) {
            cout << i - 1;
            return;
        }
    }
    cout << n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--) {
        porty();
    }

    return 0;
}