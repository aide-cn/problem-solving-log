#include <iostream>
using namespace std;

void run_case() {
    long long A, B, C;
    cin >> A >> B >> C;
    long long a = A / C;
    if (A % C != 0) {
        a++;
    }
    long long b = B / C;
    if (B % C != 0) {
        b++;
    }
    cout << a * b;
}

int main() {
    run_case();
    return 0;
}