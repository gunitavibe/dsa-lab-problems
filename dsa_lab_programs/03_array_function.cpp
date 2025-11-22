// Author: Gunita, Roll No. 241515

/*
   Program 3:
   Program to insert, delete, and traverse elements in a one-dimensional array.
*/

#include <iostream>
using namespace std;

void insertElement(int arr[], int &n, int pos, int value) {
    if (pos < 0 || pos > n) return;

    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;
    n++;
}

void deleteElement(int arr[], int &n, int pos) {
    if (pos < 0 || pos >= n) return;

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void traverseArray(int arr[], int n, int result[]) {
    for (int i = 0; i < n; i++) {
        result[i] = arr[i];   // storing array values to print in main
    }
}

int main() {
    int arr[100], result[100];
    int n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    traverseArray(arr, n, result);
    for (int i = 0; i < n; i++) cout << result[i] << " ";

    cout << "\nEnter position to insert: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> value;

    insertElement(arr, n, pos, value);

    cout << "\nArray After Insertion: ";
    traverseArray(arr, n, result);
    for (int i = 0; i < n; i++) cout << result[i] << " ";

    cout << "\n\nEnter position to delete: ";
    cin >> pos;

    deleteElement(arr, n, pos);

    cout << "\nArray After Deletion: ";
    traverseArray(arr, n, result);
    for (int i = 0; i < n; i++) cout << result[i] << " ";

    return 0;
}



