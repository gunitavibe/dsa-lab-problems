// Author: Gunita, Roll No. 241515

/*
   Program 2:
   Recursive computation of factorial for a given number.
*/
#include <iostream>
using namespace std;

int fact(int n) {
    if (n <= 1) 
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    cout <<"enter a number :";
    cin >> n;

    int result = fact(n);
    cout << result;

    return 0;
}
