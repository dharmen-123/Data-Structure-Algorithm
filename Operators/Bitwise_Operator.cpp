
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

#include<iostream>
using namespace std;

int main(){
     int a = 5;  // 0101
     int b = 3;  // 0011
     int result = a & b; // 0001 → 1
     cout<<result;
}