#include <iostream>
using namespace std;

void run_case() {
    int A, B, c = 0;
    cin >> A >> B;
    
    while (A < B) {
        A = A * 3;
        B = B * 2;
        c++;
    }
    if (A == B) {
        c++;
    }
    cout << c;
}

int main() {
    run_case();
    return 0;
}