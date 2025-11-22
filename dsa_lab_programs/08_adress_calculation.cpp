// Author: Gunita, Roll No. 241515

/*
   Program 8:
   Program to calculate address of an element in a 2D array using row-major and column-major formulas.
*/
#include <iostream>
using namespace std;

// Row-major address calculation
int rowMajor(int base, int i, int j, int totalCols, int sizeEach)
{
    // Formula: base + (i * totalCols + j) * sizeEach
    return base + (i * totalCols + j) * sizeEach;
}

// Column-major address calculation
int columnMajor(int base, int i, int j, int totalRows, int sizeEach)
{
    // Formula: base + (j * totalRows + i) * sizeEach
    return base + (j * totalRows + i) * sizeEach;
}

int main()
{
    int baseAddress, i, j, rows, cols, sizeEach;

    cout << "Enter base address: ";
    cin >> baseAddress;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter size of each element (in bytes): ";
    cin >> sizeEach;

    cout << "Enter element position (i j): ";
    cin >> i >> j;

    int rowAddr = rowMajor(baseAddress, i, j, cols, sizeEach);
    int colAddr = columnMajor(baseAddress, i, j, rows, sizeEach);

    cout << "\nRow-Major Address = " << rowAddr;
    cout << "\nColumn-Major Address = " << colAddr;

    return 0;
}
