#include <iostream>

using namespace std;

double hitungLuas(double panjang, double lebar) {
    return panjang * lebar;
}

double hitungKeliling(double panjang, double lebar) {
    return 2 * (panjang + lebar);
}

void tampilkanHasil(double luas, double keliling) {
    cout << "Luas: " << luas << endl;
    cout << "Keliling: " << keliling << endl;
}

int main() {

    double panjang, lebar;

    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    double luas = hitungLuas(panjang, lebar);
    double keliling = hitungKeliling(panjang, lebar);

    tampilkanHasil(luas, keliling);    
    return 0;
}