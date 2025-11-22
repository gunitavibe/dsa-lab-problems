// Author: Gunita, Roll No. 241515

/*
   Program 7:
   Program to implement Merge Sort using recursion.
*/
#include <iostream>
using namespace std;

int arr[100];   
int n;         

void mergeArray(int low, int mid, int high) {
    int temp[100];
    int i = low;
    int j = mid + 1;
    int k = low;

    // Merge the two sorted halves
    while(i <= mid && j <= high) {
        if(arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // Copy remaining elements
    while(i <= mid) {
        temp[k++] = arr[i++];
    }
    while(j <= high) {
        temp[k++] = arr[j++];
    }

    // Copy temp back to original array
    for(int p = low; p <= high; p++) {
        arr[p] = temp[p];
    }
}

void mergeSort(int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;

        mergeSort(low, mid);        // Left half
        mergeSort(mid + 1, high);   // Right half
        mergeArray(low, mid, high); // Merge them
    }
}

int main() {

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(0, n - 1);

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
