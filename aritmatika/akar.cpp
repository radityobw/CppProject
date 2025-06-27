#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float x;
    cout << "Masukkan akar dari: ";
    cin >> x;

    if (x < 0) {
        cout << "Akar dari bilangan negatif tidak terdefinisi dalam bilangan real." << endl;
    } else {
        double akar = sqrt(x);
        cout << "Akar dari " << x << " adalah " << akar << endl;

    }
    cin.get(); // Tunggu input dari pengguna sebelum keluar
    return 0;
}