// Author: Gunita, Roll No. 241515

/*
   Program 5:
   Program to implement Bubble Sort and display intermediate passes.
*/
#include <iostream>
using namespace std;

// GLOBAL VARIABLES
int arr[100];
int n;

// FUNCTION TO DISPLAY ARRAY 
void display() {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// BUBBLE SORT FUNCTION (NO cout USED HERE) 
void bubbleSort() {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
            // display intermediate passes OUTSIDE sort function
        cout << "Pass " << i+1 << ": ";
        display();
    }
}

//MAIN FUNCTION
int main() {
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort();

    cout << "Sorted array: ";
    display();

    return 0;
}
