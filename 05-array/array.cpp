#include <iostream>

using namespace std;

int main() {
    
    int array[5]; // Declare an array of 5 integers
    cout << "Enter 5 integers: " << endl;
    cin >> array[0]; // Input first element of the array
    cin >> array[1]; // Input second element of the array
    cin >> array[2]; // Input third element of the array
    cin >> array[3]; // Input fourth element of the array
    cin >> array[4]; // Input fifth element of the array
    

    int *ptr = array; // Pointer to the first element of the array

    cout << "Array elements using pointer arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // Accessing elements using pointer arithmetic
    }
    cout << endl;

    cout << "Array elements using pointer dereferencing:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " "; // Accessing elements using pointer dereferencing
    }
    cout << endl;

    cout << "Array elements using pointer and index:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(array + i) << " "; // Accessing elements using pointer and index
    }
    cout << endl;

    cout << "Array elements using array notation:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " "; // Accessing elements using array notation
    }
    cout << endl;

    cout << "Array elements using pointer to pointer:" << endl;
    int **ptr_to_ptr = &ptr; // Pointer to pointer
    for (int i = 0; i < 5; i++) {
        cout << *(*ptr_to_ptr + i) << " "; // Accessing elements using pointer to pointer
    }
    cout << endl;

    cout << "Array elements using pointer to array:" << endl;
    int (*ptr_to_array)[5] = &array; // Pointer to array
    for (int i = 0; i < 5; i++) {
        cout << (*ptr_to_array)[i] << " "; // Accessing elements using pointer to array
    }
    cout << endl;

    cout << "Array elements using pointer to first element:" << endl;
    int *ptr_first = &array[0]; // Pointer to the first element of the array
    for (int i = 0; i < 5; i++) {
        cout << *(ptr_first + i) << " "; // Accessing elements using pointer to first element
    }
    cout << endl;

    cout << "Array elements using pointer to last element:" << endl;
    int *ptr_last = &array[4]; // Pointer to the last element of the array
    for (int i = 0; i < 5; i++) {
        cout << *(ptr_last - (4 - i)) << " "; // Accessing elements using pointer to last element
    }
    cout << endl;

    cout << "Array elements using pointer to middle element:" << endl;
    int *ptr_middle = &array[2]; // Pointer to the middle element of the array
    for (int i = 0; i < 5; i++) {
        cout << *(ptr_middle - 2 + i) << " "; // Accessing elements using pointer to middle element
    }
    cout << endl;



    cout << "\nReversed array elements: ";
    for (int i = 4; i >= 0; i--) {
        cout << array[i] << " "; // Accessing elements in reverse order
    }
    cout << endl;

    cout << "Array elements in sorted order: ";
    sort(array, array + 5); // Sorting the array
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " "; // Accessing elements in sorted order
    }
    cout << endl;

    cout << "Array elements in reverse sorted order: ";
    sort(array, array + 5, greater<int>()); // Sorting the array in reverse
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " "; // Accessing elements in reverse sorted order
    }
    cout << endl;



    cout << "\nSize of data types:" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of pointer to int: " << sizeof(int*) << " bytes" << endl;
    cout << "Size of pointer to pointer to int: " << sizeof(int**) << " bytes" << endl;
    cout << "Size of pointer to array of 5 integers: " << sizeof(int(*)[5]) << " bytes" << endl;
    cout << "Size of array element: " << sizeof(array[0]) << " bytes" << endl;
    cout << "Size of pointer: " << sizeof(ptr) << " bytes" << endl;
    cout << "Size of array: " << sizeof(array) << " bytes" << endl;



    cout << "\nStatistics of array elements: " << endl;
    cout << "Sum of array elements: " << array[0] + array[1] + array[2] + array[3] + array[4] << endl;
    cout << "Average of array elements: " << (array[0] + array[1] + array[2] + array[3] + array[4]) / 5.0 << endl;
    cout << "Maximum element in the array: " << *max_element(array, array + 5) << endl;
    cout << "Minimum element in the array: " << *min_element(array, array + 5) << endl;
    cout << "Total number of elements in the array: " << sizeof(array) / sizeof(array[0]) << endl;


    cin.get();
    return 0;
}