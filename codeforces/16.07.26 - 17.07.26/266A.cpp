#include <iostream>
using namespace std;

void run_case() {
    int A, c = 0;
    cin >> A;
    string B;
    cin >> B;
    for (int i = 0; i < B.size(); i++) {
        if (B[i] == B[i+1]) {
            c++;
        }
    }
    cout << c;
}

int main() {
    run_case();
    return 0;
}