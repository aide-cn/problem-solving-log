#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

void run_case() {
    string A, a;
    cin >> A;
    transform(A.begin(), A.end(), A.begin(), [](unsigned char c) {
        return tolower(c);
    });
    for (char b : A) {
        switch (b) {
            case 'a':
                break;
            case 'o':
                break;
            case 'y':
                break;
            case 'e':
                break;
            case 'u':
                break;
            case 'i':
                break;
            default:
                a += b;
                break;
        }
    }
    for (int i = 0; i < a.size(); i++) {
        cout << "." << a[i];
    }
}

int main() {
    run_case();
    return 0;
}