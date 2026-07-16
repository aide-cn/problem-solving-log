#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void run_case(int a, int b){
    vector<int> c(a);
    for (int i = 0; i < a; i++) {
        cin >> c[i];
    }
    int d = c[b - 1];
    cout << count_if(c.begin(), c.end(), [d](int n){
        return n >= d && n > 0;
    });
}

int main(){
    int a, b;
    cin >> a >> b;
    run_case(a, b);
    return 0;
}