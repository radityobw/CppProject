#include <iostream>

using namespace std;

int main(){
    // Program Kalkulator Sederhana

    //deklasrasi
    float a, b, hasil;
    char aritmatika;

    // Menampilkan program
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> aritmatika;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << "\nOperasi aritmatika: " << endl;
    cout << a << aritmatika << b;

    // Logika operasi aritmatika
    if (aritmatika == '+'){
        hasil = a + b;
    } else if (aritmatika == '-'){
        hasil = a - b;
    } else if (aritmatika == '*'){
        hasil = a * b;
    } else if (aritmatika == '/'){
        if (b != 0) {
            hasil = a / b;
        } else {
            cout << "Pembagian dengan nol tidak diperbolehkan." << endl;
            return 1; // Keluar dari program jika pembagian dengan nol
        }
    } else {
        cout << "Operator tidak valid. Gunakan +, -, *, atau /." << endl;
        return 1; // Keluar dari program jika operator tidak valid
    }

    // Menampilkan hasil
    cout << " = " << hasil << endl;

    cin.get();
    return 0;
}