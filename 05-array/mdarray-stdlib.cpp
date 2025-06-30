#include <iostream>
#include <array>
using namespace std;

int main() {
	array<array<int, 3>, 3> namaArray;

	cout << "Masukkan 9 bilangan bulat (3x3): " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> namaArray[i][j]; // Input elemen array 2D
		}
	}

	cout << "\nElemen array 2D yang dimasukkan:" << endl;
	cout << namaArray[0][0] << ' ';
	cout << namaArray[0][1] << ' ';
	cout << namaArray[0][2] << ' ' << endl;
	cout << namaArray[1][0] << ' ';
	cout << namaArray[1][1] << ' ';
	cout << namaArray[1][2] << ' ' << endl;
	cout << namaArray[2][0] << ' ';
	cout << namaArray[2][1] << ' ';
	cout << namaArray[2][2] << ' ' << endl;


	// cout << "Elemen array 2D yang dimasukkan:" << endl;
	// for (int i = 0; i < 3; i++) {
	// 	for (int j = 0; j < 3; j++) {
	// 		cout << "namaArray[" << i << "][" << j << "] = " << namaArray[i][j] << endl; // Mengakses elemen array 2D
	// 	}
	// }

	cout << "Ukuran array: " << namaArray.size() << endl;
	cout << "Alamat awal dari array: " << namaArray.begin() << endl;
	cout << "Alamat akhir dari array: " << namaArray.end() << endl;

	cin.get();
	return 0;
}