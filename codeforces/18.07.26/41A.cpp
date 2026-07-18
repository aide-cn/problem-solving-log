#include <iostream>
#include <algorithm>

using namespace std;

void run_case() {
    string A, B;
    cin >> A;
    cin >> B;
    reverse(A.begin(), A.end());
    cout << (A == B ? "YES" : "NO");
}

int main() {
    run_case();
    return 0;
}