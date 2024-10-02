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
