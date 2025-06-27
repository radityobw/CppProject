#include <iostream>

using namespace std;

int main() {
    // insert code here...
    float a, b, hasil;
    cout << "Masukkan bilangan bulat pertama: ";
    cin >> a;
    cout << "Masukkan bilangan bulat kedua: ";
    cin >> b;

    //penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    //pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    //pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    //modulus
    //hasil = a % b;
    //cout << a << " % " << b << " = " << hasil << endl;


    cin.get(); // Wait for Enter key press
    return 0;
}