#include <iostream>
using namespace std;

void run_case() {
    int A, anton = 0, danik = 0;
    string C;
    cin >> A;
    cin >> C;
    for (int i : C) {
        if (i == 'A') {
            anton++;
        } else {
            danik++;
        }
    }
    if (anton == danik) {
        cout << "Friendship";
    } else {
        cout << (anton > danik ? "Anton" : "Danik");
    }
}

int main() {
    run_case();
    return 0;
}