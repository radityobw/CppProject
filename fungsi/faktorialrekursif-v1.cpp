#include <iostream>

using namespace std;

// Function prototype
int faktorial(int n);

int main () {

    int n;

    cout << "Menghitung faktorial dari bilangan bulat positif: ";
    cin >> n;

    if (n < 0) {
        cout << "Bilangan harus positif!" << endl;
    } else {
        cout << "Faktorial dari " << n << " adalah " << faktorial(n) << endl;
    }

    cin.get();
    return 0;

}

int faktorial(int n) {
    if (n <= 1) {
        return n;
    } else {
        return n * faktorial(n - 1);
    }
}