// Author: Gunita, Roll No. 241515

/*
   Program 10:
   Stack implementation using linked list with dynamic memory allocation.
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = nullptr;

// Push operation
void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

// Pop operation
int pop() {
    if (top == nullptr) {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    Node* temp = top;
    int value = temp->data;
    top = top->next;
    delete temp;
    return value;
}

// Peek operation
int peek() {
    if (top == nullptr) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return top->data;
}

// Display operation
void display() {
    if (top == nullptr) {
        cout << "Stack is empty!" << endl;
        return;
    }
    Node* temp = top;
    cout << "Stack elements: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n1.Push  2.Pop  3.Peek  4.Display  5.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                value = pop();
                if (value != -1)
                    cout << "Popped: " << value << endl;
                break;

            case 3:
                value = peek();
                if (value != -1)
                    cout << "Top element: " << value << endl;
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
}
