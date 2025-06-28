#include <iostream>

using namespace std;


int main() {
   
    // Inisialisasi variabel a
    int a;

    //pointer
    int *aPtr = nullptr;
    aPtr = &a;
    
    // Output informasi pointer
    cout << "Pointer aPtr telah diinisialisasi ke nullptr." << endl;
    cout << "Pointer aPtr menunjuk ke alamat: " << aPtr << endl;
    cout << "Pointer aPtr menunjuk ke nilai: " << *aPtr << endl;
    cout << endl;

    // Input nilai a
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << endl;

    // Output nilai a dan alamatnya
    cout << "Nilai a telah diinput." << endl;
    cout << "Nilai a: " << a << endl;
    cout << "Alamat a: " << &a << endl;
    cout << "Pointer aPtr sekarang menunjuk ke alamat: " << aPtr << endl;
    cout << "Pointer aPtr sekarang menunjuk ke nilai: " << *aPtr << endl;
    
    cin.get();
    return 0;
}