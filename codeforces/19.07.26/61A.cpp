#include <iostream>
using namespace std;

void run_case() {
    string A, B;
    cin >> A >> B;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] == B[i]) {
            cout << '0';
        } else {
            cout << '1';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    run_case();
    return 0;
}