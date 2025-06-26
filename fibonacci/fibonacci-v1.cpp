#include <iostream>
using namespace std;

int main() {
    // fn = fn-1 + fn-2
    // Deret Fibonacci
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Masukkan jumlah bilangan Fibonacci: ";
    cin >> n;
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
    nextTerm = t1 + t2;
    for (int i = 3; i <= n; ++i) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    cout << "dan seterusnya.\n";
    cout << "Selesai!\n";
    cin.get();

    return 0;
}