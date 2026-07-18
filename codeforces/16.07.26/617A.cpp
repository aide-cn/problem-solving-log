#include <iostream>

using namespace std;

void run_case() {
    int A;
    cin >> A;
    cout << (A % 5 != 0 ? ((A / 5) + 1) : (A /5));
}

int main() {
    run_case();
    return 0;
}