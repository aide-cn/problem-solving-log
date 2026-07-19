#include <iostream>
#include <vector>

using namespace std;

void run_case() {
    int A;
    cin >> A;
    vector<int> C(A+1);
    for (int i = 1; i <= A; i++) {
        int indeks;
        cin >> indeks;
        C[indeks] = i;
    }
    for (int i = 1; i <= A; i++) {
        cout << C[i] << (i == A ? "" : " ");
    }
}

int main() {
    run_case();
    return 0;
}