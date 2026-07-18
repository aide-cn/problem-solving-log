#include <iostream>
#include <string>
using namespace std;

void run_case() {
    int A, B, c;
    cin >> A >> B;
    while (B-- > 0) {
        c = abs(A % 10);
        if (c == 0) {
            A = A / 10;
        } else {
            A--;
        }
    }
    cout << A;
}

int main() {
    run_case();
    return 0;
}