#include <iostream>
#include <vector>
#include <unordered_set>
#include <sstream>

using namespace std;

void run_case() {
    string A;
    getline(cin, A);
    int B;
    stringstream ss(A);
    vector<int> C;
    unordered_set<int> D;
    while (ss >> B) {
        if (D.find(B) == D.end()) {
            C.push_back(B);
            D.insert(B);
        }
    }
    cout << 4 - D.size();
}

int main() {
    run_case();
    return 0;
}