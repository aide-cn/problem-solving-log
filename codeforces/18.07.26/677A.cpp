#include <iostream>
using namespace std;

void run_case() {
    int person, height, A, B = 0;
    cin >> person >> height;
    for (int i = 0; i < person; i++) {
        cin >> A;
        if (A > height) {
            B += 2;
        } else {
            B++;
        }
    }
    cout << B;
}

int main() {
    run_case();
    return 0;
}