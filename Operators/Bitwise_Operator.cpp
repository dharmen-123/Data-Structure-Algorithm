
   // // **** BITWISE OPERATOR  **** // //

// A bitwise operator performs operations on individual bits of integer data.

//   &	AND	            Sets bit to 1 if both bits are 1
//   |	OR
//   ^	XOR	            Sets bit to 1 if bits are different
//   ~	NOT(Complement)	Inverts all bits
//   <<	Left Shift	    Shifts bits to left
//   >>	Right Shift	    Shifts bits to right

// // **** 1.Bitwise AND (&) **** // //
// Returns 1 only if both bits are 1

// #include<iostream>
// using namespace std;
// int main(){
//      int a = 5;  // 0101
//      int b = 3;  // 0011
//      int result = a & b; // 0001 → 1
//      cout<<result<<endl;
// }

// // **** 2.Bitwise OR (|) **** // //
// Returns 1 if at least one bit is 1

// #include<iostream>
// using namespace std;
// int main(){
//      int a = 5;  // 0101
//      int b = 3;  // 0011
//      int result = a | b; // 0111 → 7
//      cout<<result<<endl;
// }

// // **** 3.Bitwise XOR (^) **** // //
// Returns 1 if bits are different

// #include<iostream>
// using namespace std;
// int main(){
//      int a = 5;  // 0101
//      int b = 3;  // 0011
//      int result = a ^ b; // 0110 → 6
//      cout<<result<<endl;
// }

// // **** 4.Bitwise NOT (~) **** // //
//Flips all bits (1 → 0, 0 → 1)

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;   // 00000101
//     int result = ~a; // 11111010
//     cout<<result<<endl;
// }

// // **** 5.Left Shift (<<) **** // //
// Shifts bits to the left, fills with 0

// 🔹 Formula
//  a << n = a × 2ⁿ

// #include<iostream>
// using namespace std;
// int main(){
//      int a = 5;  // 0101
//      int result = a << 1; // 1010 → 10
//      cout<<result<<endl;
// }

// // **** 6.Right Shift (>>) **** // //
// Shifts bits to the right

// 🔹 Formula
//  a >> n = a / 2ⁿ

// #include<iostream>
// using namespace std;
// int main(){
//      int a = 8;  // 1000
//      int result = a >> 1; // 0100 → 4
//      cout<<result<<endl;
// }


// // //  Swap two number without third variable // // //
#include<iostream>
using namespace std;

int main(){
     int a=5,b=10;
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
     cout<<a<<" "<<b;

}