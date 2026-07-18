#include <iostream>
using namespace std;

struct tram {
    int A, B;
};
void run_case() {
    int A, passegers = 0, C = 0;
    cin >> A;
    tram stop;
    for (int i = 0; i < A; i++) {
        cin >> stop.A >> stop.B;
        passegers = passegers + (stop.B - stop.A);
        if (C < passegers) {
            C = passegers;
        }
    }
    cout << C;
}


int main() {
    run_case();
    return 0;
}