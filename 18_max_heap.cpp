// Author: Gunita, Roll No. 241515

/*
   Program 18:
   Build a max heap and perform heapify.
*/
#include <iostream>
using namespace std;

int arr[50];
int n;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest); 
    }
}

void buildMaxHeap(int arr[], int n) {
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

int main() {
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    buildMaxHeap(arr, n);

    cout << "Max Heap: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
