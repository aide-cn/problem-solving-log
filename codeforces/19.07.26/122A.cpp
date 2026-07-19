#include <iostream>
#include <vector>
using namespace std;

vector<int> lucky_list;
void lucky(int A, int B) {
    if (A > B) {
        return;
    }
    if (A > 0) {
        lucky_list.push_back(A);
    }
    lucky(A * 10 + 4, B);
    lucky(A * 10 + 7, B);
}

void run_case() {
    int A;
    cin >> A;
    lucky(0, A);
    for (int i : lucky_list) {
        if (A % i == 0) {
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