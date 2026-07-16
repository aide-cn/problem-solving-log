#include <iostream>
using namespace std;

void run_case() {
    string A;
    cin >> A;
    if (A.length() <= 10){
        cout << A << "\n";
    } else if (A.length() > 10) {
        cout << A[0] << ((A.length()) - 2) << A[A.length() - 1] << "\n";
    }
}

int main() {
    int a;
    cin >> a;
    while (a-- > 0)
        run_case();
}