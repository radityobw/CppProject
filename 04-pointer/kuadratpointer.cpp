#include <iostream>

using namespace std;

// Fungsi untuk mengkuadratkan bilangan bulat dengan input pointer
void kuadratpointer(int *p){
    *p = (*p) * (*p);
}

int main(){

    int a;

    // Input bilangan bulat
    cout << "Program untuk mengkuadratkan bilangan bulat dengan pointer" << endl;
    cout << "Masukkan bilangan bulat yang ingin dikuadratkan: ";
    cin >> a;

    // Menampilkan nilai sebelum kuadrat
    cout << "Sebelum kuadrat: " << a << endl;

    //fungsi dengan input pointer
    kuadratpointer(&a);

    // Menampilkan nilai setelah kuadrat
    cout << "Setelah kuadrat: " << a << endl;

    // Menampilkan alamat dari bilangan bulat
    cout << "Alamat dari bilangan bulat: " << &a << endl;


    cin.get();
    return 0;
}