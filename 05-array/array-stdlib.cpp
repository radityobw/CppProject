#include <iostream>
#include <array>
using namespace std;

int main(){
    

    array<int, 5> namaArray;

    cout << "Masukkan 5 bilangan bulat: " << endl;
    cin >> namaArray[0]; // Input elemen pertama dari array
    cin >> namaArray[1]; // Input elemen kedua dari array
    cin >> namaArray[2]; // Input elemen ketiga dari array
    cin >> namaArray[3]; // Input elemen keempat dari array
    cin >> namaArray[4]; // Input elemen kelima dari array

    for (int i = 0; i < 5; i++) {
        namaArray[i] = i;
        cout << "namaArray[" << i << "] = " << namaArray[i] << endl; // Mengakses elemen array
    }
    
    cout << "Ukuran array: " << namaArray.size() << endl;
    cout << "Adresses awal dari array: " << namaArray.begin() << endl;
    cout << "Adresses akhir dari array: " << namaArray.end() << endl;
    // cout << "Akses index ke-2: " << namaArray.at(2) << endl; // Mengakses elemen dengan metode at()

    cin.get();
    return 0;
}