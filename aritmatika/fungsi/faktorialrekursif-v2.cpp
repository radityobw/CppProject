#include <iostream>

using namespace std;

// Function prototype
int faktorial(int n);

int main () {

    int n, hasil;

    cout << "Menghitung faktorial dari : ";
    cin >> n;

    hasil = faktorial(n);
    if (n < 0) {
        cout << "Bilangan harus positif!" << endl;
    } else {
        cout << "\nNilai faktorialnya adalah : " << hasil << endl;
    }

    cin.get();
    return 0;

}

int faktorial(int n) {
    if (n <= 1) {
        cout << n;
        return n;
    } else {
        cout << n << "*";;
        return n * faktorial(n - 1);
    }
}