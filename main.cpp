#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int generateAngkaRandom() {

srand(time(0));
    return rand() % 100 + 1;
}

bool cekJawaban(int tebakan, int angkaAsli) {
    if (tebakan == angkaAsli) {
        cout << "Selamat, Anda benar!" << endl;
        return true;
    } else if (tebakan < angkaAsli) {
        cout << "Terlalu kecil!" << endl;
    } else {
        cout << "Terlalu besar!" << endl;
    }
    return false;
}
void mulaiPermainan() {
    cout << "Selamat datang di permainan tebak angka!" << endl;
    cout << "Tebak angka antara 1 sampai 100." << endl;

    int angkaAsli = generateAngkaRandom();
    int tebakan;

    do {
        cout << "Masukkan tebakan Anda: ";
        cin >> tebakan;
    } while (!cekJawaban(tebakan, angkaAsli));
}

int main() {
    mulaiPermainan();
    return 0;
}
