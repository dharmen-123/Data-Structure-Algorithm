
                 /* //      2D ARRAY      // */

/*  A 2D array is a collection of elements arranged in rows and columns, like a matrix.
It is essentially an array of arrays, stored in contiguous memory locations. */

//Syntax:
// data_type array_name[rows][columns];

/*
Example:
int arr[3][3] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
                };
*/

/*
// //    Characteristics
// Fixed size (rows × columns).
// Elements accessed using two indices: arr[row][col].
// Stored in memory either row-major or column-major order.*/

/*
    1. Row-Major Order
* Elements of each row are stored contiguously in memory.
* C/C++ uses row-major order.
* Formula for address of element arr[i][j]:
*             𝐿𝑂𝐶(𝑎𝑟𝑟[𝑖][𝑗])=𝐵𝑎𝑠𝑒+(𝑖⋅col+𝑗)⋅size
* where Base = starting address, col = number of columns, size = size of each element.
*/

/*
    2. Column-Major Order
* Elements of each column are stored contiguously in memory.
* Languages like Fortran, MATLAB use column-major order.
* Formula for address of element arr[i][j]:
*         𝐿𝑂𝐶(𝑎𝑟𝑟[𝑖][𝑗])=𝐵𝑎𝑠𝑒+(𝑗⋅row+𝑖)⋅size
*/

#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Matrix elements (row-major):\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
