#include <iostream>
using namespace std;

int main() {

    int a,b, hasil;
    char operasi;

    // Menggunakan tipe data int untuk bilangan bulat
    // Menggunakan tipe data char untuk operasi operasi

    cout << "=================================" << endl;
    cout << "Program Kalkulator Sederhana" << endl;
    cout << "=================================" << endl;
    cout << "operasi yang didukung: +, -, *, /" << endl;
    cout << "=================================" << endl;
    cout << "Masukkan bilangan bulat pertama: ";
    cin >> a;
    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> operasi;

    // Validasi input operasi
    if (operasi != '+' && operasi != '-' && operasi != '*' && operasi != '/') {
        cout << "operasi tidak valid. Silakan masukkan +, -, * atau /." << endl;
        return 1; // Keluar dari program jika operasi tidak valid
    }
    // Memastikan input kedua hanya diminta jika operasi valid

    cout << "Masukkan bilangan bulat kedua: ";
    cin >> b;   

    cout << "=================================" << endl;

    switch (operasi) {
        case '+':
            hasil = a + b;
            cout << a << " + " << b << " = " << hasil << endl;
            break;
        case '-':
            hasil = a - b;
            cout << a << " - " << b << " = " << hasil << endl;
            break;
        case '*':
            hasil = a * b;
            cout << a << " * " << b << " = " << hasil << endl;
            break;
        case '/':
            if (b != 0) {
                hasil = a / b;
                cout << a << " / " << b << " = " << hasil << endl;
            } else {
                cout << "Pembagian dengan nol tidak diperbolehkan." << endl;
            }
            break;
    }

}