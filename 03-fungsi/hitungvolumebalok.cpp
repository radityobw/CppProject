#include <iostream>

using namespace std;

// Fungsi Prototipe
// Dengan default parameter 1
double volumeBalok(double p = 1, double l = 1, double t = 1);

// Fungsi overloading untuk menghitung volume kubus dengan 1 parameter
double volumeBalok(double sisi) {
    return sisi * sisi * sisi;
} 

int main(){

    cout << "================================" << endl;
    cout << "Program Menghitung Volume Balok" << endl;
    cout << "================================" << endl;
    cout << "Masukkan panjang balok: ";
    double p, l, t;
    cin >> p;
    cout << "Masukkan lebar balok: ";
    cin >> l;
    cout << "Masukkan tinggi balok: ";
    cin >> t;
    cout << "================================" << endl;
    cout << "Volume balok adalah: " << volumeBalok(p, l, t) << endl;

    cin.get();
    return 0;
}

//Fungsi untuk menghitung volume balok
double volumeBalok(double p, double l, double t) {
    return p * l * t;
}