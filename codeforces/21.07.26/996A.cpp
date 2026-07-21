#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    ll A;
    int B = 0;
    cin >> A;
    
    if (A >= 100) {
        B += A / 100;
        A %= 100;
    }
    if (A >= 20) {
        B += A / 20;
        A %= 20;
    }
    if (A >= 10) {
        B += A / 10;
        A %= 10;
    }
    if (A >= 5) {
        B += A / 5;
        A %= 5;
    }
    if (A >= 1) {
        B += A / 1;
        A %= 1;
    }
    cout << B;
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