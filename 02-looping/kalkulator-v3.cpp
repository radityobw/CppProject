#include <iostream>
#include <limits> // untuk numeric_limits
using namespace std;

// Fungsi validasi input angka bulat
int inputAngka(const string& prompt) {
    int x;
    while (true) {
        cout << prompt;
        cin >> x;

        if (cin.fail()) {
            cout << "Input tidak valid. Harus angka bulat!" << endl;
            cin.clear(); // reset error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // buang input salah
        } else {
            return x; // input valid
        }
    }
}

char inputOperasi() {
    string op;
    while (true) {
        cout << "Masukkan operasi (+, -, *, /): ";
        cin >> op;

        if (op.length() != 1 || (op[0] != '+' && op[0] != '-' && op[0] != '*' && op[0] != '/')) {
            cout << "Input tidak valid. Masukkan satu karakter: +, -, *, atau /." << endl;
        } else {
            return op[0];
        }
    }
}

int main() {
    int a, b, hasil;
    char operasi;

    cout << "=================================" << endl;
    cout << "Program Kalkulator Sederhana" << endl;
    cout << "=================================" << endl;
    cout << "Operasi yang didukung: +, -, *, /" << endl;
    cout << "=================================" << endl;

    a = inputAngka("Masukkan bilangan bulat pertama: ");

    operasi = inputOperasi();

    // Validasi operasi
    if (operasi != '+' && operasi != '-' && operasi != '*' && operasi != '/') {
        cout << "Operasi tidak valid. Silakan masukkan +, -, * atau /." << endl;
        return 1;
    }

    b = inputAngka("Masukkan bilangan bulat kedua: ");

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

    cin.get(); // Tunggu input dari pengguna sebelum keluar
    cout << "Terima kasih telah menggunakan kalkulator ini!" << endl;
    return 0;
}