#include <iostream>
using namespace std;

void run_case() {
    string A;
    int yes_0 = 0, yes_1 = 0;
    cin >> A;
    for (char i : A) {
        if (i == '0') {
            yes_1 = 0;
            yes_0++;
        } else {
            yes_0 = 0;
            yes_1++;
        }
        if (yes_0 >= 7 || yes_1 >= 7) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main() {
    run_case();
    return 0;
}