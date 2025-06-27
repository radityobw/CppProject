#include <iostream>
using namespace std;

// int kuadrat(int x) {
//     int y = x * x;
//     return y;
// }

int kuadrat(int x) {
    return x * x;
}

void tampilkan(int x) {
    cout << "Hasil kuadrat dari " << x << " adalah " << kuadrat(x) << endl;
}

int main() {
    
    int angka;
    cout << "Angka kuadrat dari: ";
    cin >> angka;
    tampilkan(angka);

    cin.get(); // Tunggu input dari pengguna sebelum keluar
    return 0;
}