#include <iostream>
#include <set>

using namespace std;

void run_case() {
    long long A;
    int B = 0;
    cin >> A;

    while (A > 0) {
        if (A % 10 == 4 || A % 10 == 7) {
            B++;
        }
        A /= 10;
    }
    cout << ((B == 4 || B == 7) ? "YES" : "NO");
}

int main() {
    run_case();
    return 0;
}