#include <iostream>
using namespace std;

struct AS {
    int people, capacity;
};

void run_case() {
    int A, free_place = 0;
    AS room;
    cin >> A;
    for (int i = 0; i < A; i++) {
        cin >> room.people >> room.capacity;
        if ((room.capacity - room.people) >= 2) {
            free_place++;
        }
    }
    cout << free_place;
}

int main() {
    run_case();
    return 0;
}