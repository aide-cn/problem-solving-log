#include <iostream>
#include <unordered_set>

using namespace std;

void run_case() {
    string A;
    unordered_set<char> check;
    string B = "hello", C;
    cin >> A;
    for (int i = 0; i < B.size(); i++) {
        for (char j : A) {
            if (j == B[i]) {
                check.insert(j);
                C += j;
                i++;
            }
        }
    }
    cout << ((C == "hello") ? "YES" : "NO");
}

int main() {
    run_case();
    return 0;
}