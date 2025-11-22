// Author: Gunita, Roll No. 241515

/*
   Program 12:
   Queue implementation using linked list with dynamic memory allocation.
*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL) {      // Queue is empty
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty. Cannot dequeue.\n";
        return;
    }

    Node* temp = front;
    front = front->next;

    // If queue becomes empty
    if (front == NULL) {
        rear = NULL;
    }

    delete temp;
}

int peek() {
    if (front == NULL) {
        cout << "Queue is empty.\n";
        return -1;
    }
    return front->data;
}

void display() {
    if (front == NULL) {
        cout << "Queue is empty.\n";
        return;
    }

    Node* temp = front;
    cout << "Queue elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, value;

    while (1) {
        cout << "\n1 Enqueue  2 Dequeue  3 Peek  4 Display  5 Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            cout << "Front element: " << peek() << endl;
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice.\n";
        }
    }
}
