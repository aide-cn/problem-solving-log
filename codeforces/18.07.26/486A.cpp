#include <iostream>
using namespace std;

void run_case() {
    long long A;
    cin >> A;
    if (A % 2 == 0) {
        A = A / 2;
    } else {
        A = ((A - 1) / 2) - A;
    }
    cout << A;
}

int main() {
    run_case();
    return 0;
}