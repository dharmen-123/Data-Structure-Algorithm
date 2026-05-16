
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


// #include <iostream>
// using namespace std;
// int main() {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     cout << "Matrix elements (row-major):\n";
//     for(int i=0; i<3; i++) {
//         for(int j=0; j<3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


        /* // Search Element in 2D Array // // */
    
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[4][4]={
//         {1,3,5,7},
//         {2,4,6,8},
//         {3,5,7,9},
//         {4,6,8,10}
//         };
//         int n=4, target=7;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(arr[i][j]==target){
//                     cout<<"Element found at index : ["<<i<<"]["<<j<<"]"<<endl;
//                     return 1;
//                 }
//             }   
//         }
// return 0 ;
// }

        /* // ADD two Matrix // */
    
// #include<iostream>
// using namespace std;

// int main(){
//         int arr1[3][3]={
//             {1,2,3},
//             {4,5,6},
//             {7,8,9}
//         };
//         int arr2[3][3]={
//             {7,4,13},
//             {45,7,76},
//             {5,3,0}
//         };
//         int arrnew[3][3];
//         for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//                 arrnew[i][j]=arr1[i][j]+arr2[i][j];
//                 cout<<arrnew[i][j]<<" ";
//             }
//             cout<<endl;
//         }
// return 0 ;
// }

        /* // Print sum of diagonal element   // */
    
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[4][4]={
//         {1,3,5,7},
//         {2,4,6,8},
//         {3,5,7,9},
//         {4,6,8,10}
//         };
//         int sum=0;
//         for(int i=0;i<4;i++){
//              for(int j=0;j<4;j++){
//                 if(i==j){
//                     sum+=arr[i][j];
//                 }
//             }
//         }
//         cout<<sum;
// return 0 ;
// }