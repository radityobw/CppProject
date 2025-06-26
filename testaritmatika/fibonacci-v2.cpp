#include <iostream>

using namespace std;

int main() {
    
    int n, fn, fn1, fn2;

    cout << "===============================" << endl;
    cout << "    Program Deret Fibonacci       " << endl;
    cout << "===============================" << endl;
    cout << "Masukkan nilai n Fibonacci: ";
    cin >> n;
    if (n <= 0) {
        cout << "Nilai n harus positif." << endl;
        return 1;
    } else if (n >= 48) {
        cout << "Nilai n terlalu besar, silakan masukkan nilai kurang dari 48." << endl;
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            fn = 0; // Bilangan Fibonacci pertama
        } else if (i == 1) {
            fn = 1; // Bilangan Fibonacci kedua
        } else {
            fn = fn1 + fn2; // Bilangan Fibonacci selanjutnya
        }
        cout << fn << " ";
        fn2 = fn1; // Update untuk iterasi berikutnya
        fn1 = fn; // Update untuk iterasi berikutnya
    }

    cout << "\nSelesai!" << endl;
    cin.get(); // Tunggu input sebelum keluar
    return 0;
}