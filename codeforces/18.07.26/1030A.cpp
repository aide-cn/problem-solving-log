#include <iostream>
using namespace std;

struct people {
    int A;
};

void run_case() {
    people peeps;
    int A;
    cin >> A;
    for (int i = 0; i < A; i++) {
        cin >> peeps.A;
        if (peeps.A == 1) {
            cout << "HARD";
            return;
        }
    }
    cout << "EASY";
}

int main() {
    run_case();
    return 0;
}