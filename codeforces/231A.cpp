#include <iostream>
using namespace std;

int run_case(int e){
    int A, B, C;
    cin >> A >> B >> C;
    int d = (A == 1) + (B == 1) + (C == 1);
    if (d > 1){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b = 0;
    cin >> a;
    while (a-- > 0)
        b = b + run_case(b);
    cout << b;
    return 0;
}