// Author: Gunita, Roll No. 241515

/*
   Program 11:
*/
#include <iostream>
using namespace std;

#define SIZE 100

int queueArr[SIZE];
int front = -1;
int rear  = -1;

void enqueue(int x) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow\n";
        return;
    }
    if (front == -1) front = 0; // first element
    queueArr[++rear] = x;
}

int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return -1;
    }
    return queueArr[front++];
}

int peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return -1;
    }
    return queueArr[front];
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;

    while (true) {
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
                value = dequeue();
                if (value != -1)
                    cout << "Dequeued: " << value << endl;
                break;

            case 3:
                value = peek();
                if (value != -1)
                    cout << "Front: " << value << endl;
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
}
