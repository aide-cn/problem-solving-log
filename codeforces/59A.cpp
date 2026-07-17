#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

void run_case() {
    string A, upper, lower;
    cin >> A;
    for (char b : A) {
        if (isupper(b)) {
            upper += b;
        } else {
            lower += b;
        }
    }
    if (upper.size() == lower.size()) {
        transform(A.begin(), A.end(), A.begin(), [](unsigned c) {
            return tolower(c);
        });
    } else if (upper.size() > lower.size()) {
        transform(A.begin(), A.end(), A.begin(), [](unsigned c) {
            return toupper(c);
        });
    } else {
        transform(A.begin(), A.end(), A.begin(), [](unsigned c) {
            return tolower(c);
        });
    }
    cout << A;
}

int main() {
    run_case();
    return 0;
}