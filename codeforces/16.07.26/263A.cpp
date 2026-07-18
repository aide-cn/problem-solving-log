#include <iostream>

using namespace std;
/* my previous attempt, then i realized that i can write it shorter */
// void run_case() {
//     int A[5][5], baris = 0, kolom = 0;
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             cin >> A[i][j];
//         }
//     }
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             if (A[i][j] == 1) {
//                 baris = i + 1;
//                 kolom = j + 1;
//                 break;
//             }
//         }
//     }
//     baris = abs(baris - 3);
//     kolom = abs(kolom - 3);
//     cout << baris + kolom;
// }

void run_case() {
    int A;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> A;
            if (A == 1) {
                cout << abs(i - 3) + abs(j - 3);
                return;
            }
        }
    }
}

int main() {
    run_case();
    return 0;
}