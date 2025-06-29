#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Masukkan nilai n: ";
    cin >> n;

    // Segitiga Sama Kaki
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2*i-1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    cin.get(); // Tunggu input dari pengguna sebelum keluar
    return 0;
}