#include <iostream>

using namespace std;

void run_case() {
    string A;
    cin >> A;
    A[0] = toupper(A[0]);
    cout << A;
}

int main() {
    run_case();
    return 0;
}