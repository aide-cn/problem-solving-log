#include <iostream>
#include <unordered_set>

using namespace std;

void run_case() {
    int A;
    cin >> A;
    
    while (true) {
        A++;
        unordered_set<char> check;
        string C = to_string(A);
        for (char i : C){
            check.insert(i);
        }
        if (check.size() == 4) {
            cout << A;
            return;
        }
    }
   
}

int main() {
    run_case();
    return 0;
}