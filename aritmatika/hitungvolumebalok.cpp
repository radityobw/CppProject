#include <iostream>

using namespace std;

// Function prototype
// This function calculates the volume of a cuboid (balok) with default parameters of 1.
double volumeBalok(double p = 1, double l = 1, double t = 1);

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


double volumeBalok(double p, double l, double t) {
    return p * l * t;
}