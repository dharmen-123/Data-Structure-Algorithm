
   // // **** COMPARISION OPERATOR  **** // //

// Comparision operator give the answer in Boolean form 0/False or 1/True

// == double equal to
// > greater than
// < less than
// >= greater than equal to
// <= less than equal to 
// != Not equal to

// Example  4>18 - False
//  5!=5    False
//  6==6    True
//  7<13    False


// Operator Presedence 
// 1. {> ,< ,>= ,<=}  Left t0 right Associativity

// 2. {== , !=}  Left to right Associativity

#include<iostream>
using namespace std;

int main(){
      int a = 5, b = 10;

      cout << (a > b)<<endl;   // 0 (false)
      cout << (a < b)<<endl;   // 1 (true)
      cout << (a == b)<<endl;  // 0
      cout << (a != b)<<endl;  // 1
      cout << (a <= b)<<endl;  // 1
      cout << (a >= b)<<endl;  // 0

}