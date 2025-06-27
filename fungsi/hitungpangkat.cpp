#include <iostream>

using namespace std;

int pangkatIterasi(int a, int b) {
    int hasil = a;
    for (int i = 1; i < b; i++) {
        hasil *= a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b) {
    if (b <= 1) {
        return a;
    } else {
        return a * pangkatRekursif(a, b - 1);
    }
}

int main() {
    int a, b;
    cout << "Masukkan bilangan: ";
    cin >> a;
    cout << "Masukkan pangkat: ";
    cin >> b;

    cout << "Hasil iterasi: " << pangkatIterasi(a, b) << endl;
    cout << "Hasil rekursif: " << pangkatRekursif(a, b) << endl;

    cin.get();
    return 0;
}