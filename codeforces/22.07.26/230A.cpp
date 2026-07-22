#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int kirito, line;
    cin >> kirito >> line;
    vector<pair<int,int>> dragon;
    for (int i = 0; i < line; i++) {
        int d, reward;
        cin >> d >> reward;
        dragon.push_back({d, reward});
    }
    sort(dragon.begin(), dragon.end());
    for (int i = 0; i < dragon.size(); i++) {
        if (kirito > dragon[i].first) {
            kirito += dragon[i].second;            
        } else {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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