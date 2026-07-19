#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int A; string B;
    cin >> A >> B;
    unordered_set<char> C;
    for (char D : B) {
        C.insert(tolower(D));
    }
    if (C.size() == 26) cout << "YES";
    else cout << "NO";
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