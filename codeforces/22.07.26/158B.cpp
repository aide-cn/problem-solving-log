#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int A;
    cin >> A;

    int a=0, b=0, c=0, d=0;
    for (int i = 0; i < A; i++) {
        int B;
        cin >> B;
        if (B == 1) a++;
        else if (B == 2) b++;
        else if (B == 3) c++;
        else if (B == 4) d++;
    }
    int group = 0;
    group += d;
    group += c;
    a = max(0, a - c);
    group += b / 2;
    b %= 2;
    if (b == 1) {
        group += 1;
        a = max(0, a - 2);
    }
    if (a > 0) {
        group += (a+3) / 4;
    }
    cout << group;
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