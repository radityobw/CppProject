#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
	// Define an array of integers
	array<int, 5> arr;
	
	cout << "Masukkan 5 integers (pakai spasi): ";
	// Read integers from user input
	for (int i = 0; i < 5; ++i) {
		cin >> arr[i];
	}

	
	// Sort the array in ascending order
	sort(arr.begin(), arr.end());

	// Print the sorted array
	cout << "Sorted array: ";
	for (const auto& num : arr) {
		cout << num << " ";
	}
	cout << endl;
	cin.get(); // Wait for user input before proceeding
	
	// Search for a specific number
	int target;

	cout << "Masukkan angka yang ingin dicari: ";
	cin >> target;

	if (!(cin >> target)) {
    cout << "Input tidak valid. Pastikan Anda memasukkan angka!" << endl;
    return 1;
	}

	auto it = find(arr.begin(), arr.end(), target);
	if (it != arr.end()) {
		cout << "Angka " << target << " ditemukan pada indeks: " << distance(arr.begin(), it) << endl;
	} else {
		cout << "Angka " << target << " tidak ditemukan dalam array." << endl;
	}
	
	return 0;
}