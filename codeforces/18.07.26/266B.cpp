#include <iostream>

using namespace std;

void run_case() {
    int A, B;
    string C;
    cin >> A >> B;
    cin >> C;
    for (int i = 0; i < B; i++) {
        for (int j = 0; j < C.size(); j++) {
            if (C[j] == 'B' && C[j + 1] == 'G') {
                swap(C[j], C[j+1]);
                j++;
            }
        }
    }
    cout << C;
}

int main() {
    run_case();
    return 0;
}