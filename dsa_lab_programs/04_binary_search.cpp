// Author: Gunita, Roll No. 241515

/*
   Program 4:
   Program to implement binary search in a sorted array.
*/
#include <iostream>
using namespace std;

// Binary search function 
int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;  // return index
        }
        else if (arr[mid] < key) {
            low = mid + 1; // search right half
        }
        else {
            high = mid - 1; // search left half
        }
    }

    return -1; 
}

int main() 
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100]; // assuming max 100

    cout << "Enter sorted array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}
