#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int A;
    cin >> A;
    
    set<int> B;

    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int z;
        cin >> z;
        B.insert(z);
    }
    int b;
    cin >> b;
    for (int i = 0; i < b; i++) {
        int z;
        cin >> z;
        B.insert(z);
    }
    if (B.size() == A) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
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