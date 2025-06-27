#include <iostream>
using namespace std;

int main() {

    cout << "Masukkan Angka: ";
    int input;
    cin >> input;
    if (input % 2 == 0) {
        cout << "Angka " << input << " adalah bilangan genap.\n";
    } else {
        cout << "Angka " << input << " adalah bilangan ganjil.\n";
    }

    cin.get(); // Tunggu input dari pengguna sebelum keluar
    return 0;
}