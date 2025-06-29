#include <iostream>
using namespace std;

int main() {
	
	int hitung;
	double rata, total, nilai;
	char hasil;

	cout << "Berapa banyak mata pelajaran yang akan dihitung? ";
	cin >> hitung;

	for (int i = 1; i <= hitung; i++) {
		cout << "Masukkan nilai mata pelajaran ke-" << i << ": ";
		cin >> nilai;
		total += nilai;
	}

	rata = total / hitung;
	cout << "Rata-rata nilai mata pelajaran adalah: " << rata << endl;
		
	if (rata >= 90) {
		hasil = 'A';
	} else if (rata >= 80) {
		hasil = 'B';
	} else if (rata >= 70) {
		hasil = 'C';
	} else if (rata >= 60) {
		hasil = 'D';
	} else {
		hasil = 'E';
	}
	cout << "Nilai akhir Anda adalah: " << hasil << endl;


	cin.get();
	return 0;
}