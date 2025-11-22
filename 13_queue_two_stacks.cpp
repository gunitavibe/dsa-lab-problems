// Author: Gunita, Roll No. 241515

/*
   Program 13:
   Queue implementation using two stacks.
*/
#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:
    // Enqueue: O(1)
    void enqueue(int x) {
        s1.push(x);
    }

    // Dequeue: Amortized O(1)
    int dequeue() {
        if (s1.empty() && s2.empty()) {
            return -1; // queue is empty
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int val = s2.top();
        s2.pop();
        return val;
    }

    int peek() {
        if (s1.empty() && s2.empty()) {
            return -1;
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool isEmpty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                value = q.dequeue();
                if (value == -1)
                    cout << "Queue is empty\n";
                else
                    cout << "Dequeued: " << value << endl;
                break;

            case 3:
                value = q.peek();
                if (value == -1)
                    cout << "Queue is empty\n";
                else
                    cout << "Front: " << value << endl;
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
}

    