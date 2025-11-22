#include <iostream>
using namespace std;

// ------ Global Variables ------
int stackArr[100];
int top = -1;
int maxSize = 100;

// ------ Global Functions ------
void push(int value) {
    if (top == maxSize - 1) return;  // overflow
    top++;
    stackArr[top] = value;
}

int pop() {
    if (top == -1) return -1;  // underflow
    int removed = stackArr[top];
    top--;
    return removed;
}

int peek() {
    if (top == -1) return -1;
    return stackArr[top];
}

int display(int index) {
    if (index < 0 || index > top) return -1;
    return stackArr[index];
}

// ------ Main Function ------
int main() {
    int choice, value;

    while (true) {
        cout << "1.Push  2.Pop  3.Peek  4.Display  5.Exit : ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            if (top == maxSize - 1) cout << "Stack Overflow\n";
            else {
                push(value);
                cout << "Value pushed\n";
            }
        }

        else if (choice == 2) {
            value = pop();
            if (value == -1) cout << "Stack Underflow\n";
            else cout << "Popped: " << value << "\n";
        }

        else if (choice == 3) {
            value = peek();
            if (value == -1) cout << "Stack is Empty\n";
            else cout << "Top element: " << value << "\n";
        }

        else if (choice == 4) {
            if (top == -1) {
                cout << "Stack is Empty\n";
            } else {
                cout << "Stack: ";
                for (int i = 0; i <= top; i++) {
                    cout << display(i) << " ";
                }
                cout << "\n";
            }
        }

        else if (choice == 5) {
            break;
        }

        else {
            cout << "Invalid Choice\n";
        }
    }

    return 0;
}



//output
// 1.Push  2.Pop  3.Peek  4.Display  5.Exit : 1
// Enter value: 10
// Value pushed

// 1.Push  2.Pop  3.Peek  4.Display  5.Exit : 1
// Enter value: 20
// Value pushed

// 1.Push  2.Pop  3.Peek  4.Display  5.Exit : 4
// Stack: 10 20 

// 1.Push  2.Pop  3.Peek  4.Display  5.Exit : 3
// Top element: 20

// 1.Push  2.Pop  3.Peek  4.Display  5.Exit : 2
// Popped: 20

// 1.Push  2.Pop  3.Peek  4.Display  5.Exit : 4
// Stack: 10 

// 1.Push  2.Pop  3.Peek  4.Display  5.Exit : 2
// Popped: 10

// 1.Push  2.Pop  3.Peek  4.Display  5.Exit : 3
// Stack is Empty

// 1.Push  2.Pop  3.Peek  4.Display  5.Exit : 5

