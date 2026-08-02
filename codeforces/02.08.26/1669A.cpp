#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void porty() {
    int rating;
    cin >> rating;
    if (1900 <= rating) {
        cout << "Division 1\n";
    } else if (1600 <= rating && rating <= 1899) {
        cout << "Division 2\n";
    } else if (1400 <= rating && rating <= 1599) {
        cout << "Division 3\n";
    } else {
        cout << "Division 4\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        porty();
    }

    return 0;
}