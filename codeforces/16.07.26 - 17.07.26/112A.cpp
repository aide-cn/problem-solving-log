// lexicographically
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

void run_case() {
    string A, B;
    cin >> A;
    cin >> B;
    transform(A.begin(), A.end(), A.begin(), [](unsigned char c) {
        return tolower(c);
    });
    transform(B.begin(), B.end(), B.begin(), [](unsigned char d) {
        return tolower(d);
    });
    if (A == B) {
        cout << 0;
        return;
    }
    cout << (A < B ? -1 : 1);
}

int main() {
    run_case();
    return 0;
}