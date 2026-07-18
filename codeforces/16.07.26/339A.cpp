#include <iostream>
#include <algorithm>

using namespace std;

void run_case() {
    string A, a;
    cin >> A;
    for (char b : A) {
        if (isdigit(b)) {
            a += b;
        }
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) {
        if (i == (a.size() - 1)) {
            cout << a[i];
        } else {
            cout << a[i] << "+";
        }
    }
}

int main() {
    run_case();
    return 0;
}