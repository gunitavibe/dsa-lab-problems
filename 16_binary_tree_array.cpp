// Author: Gunita, Roll No. 241515

/*
   Program 16:
   Create a binary tree using array representation.
*/
#include <iostream>
using namespace std;

int tree[100];       // Array to represent tree
int n = 100;         // Maximum size

// Function to insert a node at given index
void insertNode(int value, int index) {
    if (index >= n) {
        cout << "Index out of range\n";
        return;
    }
    tree[index] = value;
}

// Function to display tree elements
void displayTree() {
    cout << "Binary Tree (Array Representation):\n";
    for (int i = 1; i < n; i++) {
        if (tree[i] != 0)
            cout << "Index " << i << " : " << tree[i] << endl;
    }
}

int main() {
    for (int i = 0; i < n; i++) tree[i] = 0;   // Initialize tree values


    insertNode(10, 1);
    insertNode(20, 2);  
    insertNode(30, 3); 
    insertNode(40, 4);   
    insertNode(50, 5);  

    displayTree();
    return 0;
}
