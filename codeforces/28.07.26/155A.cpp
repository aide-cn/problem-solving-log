#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void porty() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    int high = a[0];
    int low = a[0];
    int best = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > high) {
            high = a[i];
            best++;
        }
        if (a[i] < low) {
            low = a[i];
            best++;
        }
    }
    cout << best;
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