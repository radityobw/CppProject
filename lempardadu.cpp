#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

    srand(time(0)); // Seed untuk random number generator
    cout << "Lempar dadu (y/n)? ";
    int x; // Variabel untuk menyimpan hasil lempar dadu
    char choice;
    cin >> choice;

    while (true) {
        if (choice == 'y' || choice == 'Y') {
            x = rand() % 6 + 1; // Generate random number 1 - 6
            cout << "\nHasil lempar dadu: " << x << endl;
            cout << "\nLempar lagi (y/n)? ";
            cin >> choice;
        } else if (choice == 'n' || choice == 'N') {
            cout << "\nTerima kasih telah bermain!" << endl;
            break; // Keluar dari loop jika pengguna memilih 'n'
        } else {
            cout << "\nPilihan tidak valid. Silakan masukkan 'y' atau 'n'.\n" << endl;
            cout << "Lempar dadu (y/n)? ";
            cin >> choice; // Tanya ulang pilihan jika input tidak valid
            continue; // Kembali ke awal loop untuk meminta input lagi
        }
    }
    return 0; // Kembalikan 0 untuk menandakan program selesai dengan sukses
}