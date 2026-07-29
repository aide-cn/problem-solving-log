#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void porty() {
    int n;
    cin >> n;
    vector<int> number(n);
    for (int &x : number) cin >> x;
    int sereja = 0, dima = 0, giliran = 1;
    int kiri = 0;
    int kanan = n - 1;
    while (kiri <= kanan) {
        int card;
        if (number[kiri] < number[kanan]) {
            card = number[kanan];
            kanan--;
        } else {
            card = number[kiri];
            kiri++;
        }
        if (giliran) {
            sereja += card;
        } else {
            dima += card;
        }
        giliran = !giliran;
    }
    cout << sereja << " " << dima;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--) {
        porty();
    }

    return 0;
}