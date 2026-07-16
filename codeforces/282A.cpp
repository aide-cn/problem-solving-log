#include <iostream>
#include <string>

using namespace std;

int run_case() {
    string A;
    cin >> A;
    if (A.find("X") != string::npos && A.find("++") != string::npos){
        return 1;
    } else if (A.find("X") != string::npos && A.find("--") != string::npos){
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int a, b = 0;
    cin >> a;
    while (a-- > 0)
        b = b + run_case();
    cout << b;
}