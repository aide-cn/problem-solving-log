#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    string A;
    cin >> A;
    
    bool B = all_of(A.begin() + 1, A.end(), ::isupper);
    if (B) {
        for (char &c : A) {
            c = isupper(c) ? tolower(c) : toupper(c);
        }
    }
    cout << A;

    // if (A.length() == 1) {
    //     if (all_of(A.begin(), A.end(), [](unsigned char c) {return std::isupper(c);})) {
    //         A[0] = tolower(A[0]);
    //         cout << A;
    //         return;   
    //     } else {
    //         A[0] = toupper(A[0]);
    //         cout << A;
    //         return;
    //     }
    // }

    // if (all_of(A.begin(), A.end(), [](unsigned char c) {return std::isupper(c);})) {
    //     transform(A.begin(), A.end(), A.begin(), [](unsigned char b) {
    //         return tolower(b);
    //     });
    //     cout << A;
    // } else if (all_of(A.begin(), A.end(), [](unsigned char c) {return std::islower(c);})) {
    //     cout << A;
    // } else if (all_of(A.begin() + 1, A.end(), [](unsigned char c) {return std::isupper(c);})) {
    //     transform(A.begin(), A.end(), A.begin(), [](unsigned char b) {
    //         return tolower(b);
    //     });
    //     A[0] = toupper(A[0]);
    //     cout << A;
    // } else if (all_of(A.begin() + 1, A.end(), [](unsigned char c) {return std::islower(c);})) {
    //     A[0] = toupper(A[0]);
    //     cout << A;
    // } else {
    //     cout << A;
    // }
    
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