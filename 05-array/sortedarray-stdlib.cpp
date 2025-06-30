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

	return 0;
}