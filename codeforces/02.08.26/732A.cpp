#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void porty() {
    int k,r;
    cin >> k >> r;
    for (int i = 1; i <= 9; i++) {
        if ((k * i) % 10 == 0 || (k * i) % 10 == r) {
            cout << i;
            return;
        }
    }
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