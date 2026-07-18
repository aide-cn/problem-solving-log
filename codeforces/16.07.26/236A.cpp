#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

void run_case() {
    string A;
    unordered_set<char> check;
    string after;
    cin >> A;
    for (char thisonechar : A) {
        if (check.find(thisonechar) == check.end()) {
            check.insert(thisonechar);
            after += thisonechar;
        }
    }
    A = after;
    cout << ((A.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
}

int main() {
    run_case();
    return 0;
}