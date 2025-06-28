#include <iostream>

using namespace std;

int main() {

    int n, fn, fn1, fn2;
    
    cout << "Deret Fibonacci" << endl;

    // Inisialisasi input variabel Fibonacci
    cout << "Masukkan nilai n Fibonacci: ";
    cin >> n;

    // Validasi input n
    if (n <= 0) {
        cout << "Nilai n harus positif." << endl;
        return 1;
    } else if (n >= 48) {
        cout << "Nilai n terlalu besar, silakan masukkan nilai kurang dari 48." << endl;
        return 1;
    }

    // Loop untuk menghitung deret Fibonacci
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            fn = 0;
        } else if (i == 1) {
            fn = 1;
        } else {
            fn = fn1 + fn2;
        }
    // Output bilangan Fibonacci
        cout << fn << " ";
    // Update untuk iterasi berikutnya
        fn2 = fn1;
        fn1 = fn;
    }
    cout << "\nSelesai!" << endl;
    cin.get(); // Tunggu input sebelum keluar
}