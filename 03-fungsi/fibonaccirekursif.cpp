#include <iostream>

using namespace std;

int fibonacci(int n);

int main(){
    int n;
    cout << "Masukkan Fibonacci ke-n: ";
    cin >> n;

    // Validasi input
    if (n < 0) {
        cout << "Bilangan harus positif." << endl;
        return 1;
    } else {
        cout << "Jumlah deret Fibonacci dari " << n << " adalah: " << fibonacci(n) << endl;
    }
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
