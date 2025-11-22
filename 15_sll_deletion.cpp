// Author: Gunita, Roll No. 241515

/*
   Program 15:
   Delete a node from singly linked list by value or position.
*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at end for testing
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node{value, NULL};

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Delete node by value
void deleteByValue(Node*& head, int value) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    // If head node is the one to delete
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node with value " << value << " deleted\n";
        return;
    }

    Node* current = head;
    Node* prev = NULL;

    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        cout << "Value not found\n";
        return;
    }

    prev->next = current->next;
    delete current;
    cout << "Node with value " << value << " deleted\n";
}

// Delete node by position (1-based index)
void deleteByPosition(Node*& head, int pos) {
    if (head == NULL || pos <= 0) {
        cout << "Invalid operation\n";
        return;
    }

    // Delete head
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node at position 1 deleted\n";
        return;
    }

    Node* current = head;
    Node* prev = NULL;

    for (int i = 1; current != NULL && i < pos; i++) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        cout << "Position out of range\n";
        return;
    }

    prev->next = current->next;
    delete current;
    cout << "Node at position " << pos << " deleted\n";
}

// Display list
void display(Node* head) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    cout << "Original List:\n";
    display(head);

    deleteByValue(head, 20);
    display(head);

    deleteByPosition(head, 2);
    display(head);

    return 0;
}

