//Author - gunita - 241515

#include <iostream>
using namespace std;

int fib(int n) { // returns nth Fibonacci (0-indexed)
    if (n <= 1) return n;
    
    return fib(n-1) + fib(n-2);
}

int main() {
    int N;
    cout << "enter the number of terms : ";
    if (!(cin >> N) || N <= 0) return 0;
    for (int i = 0; i < N; ++i) {
        cout << fib(i) << (i+1==N?'\n':' ');
    }
    return 0;
}
