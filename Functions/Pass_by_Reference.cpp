
    // // ***** PASS BY REFERENCE ***** // //

/* In Pass by Reference, the function receives a reference (alias) to the original variable, 
    so any modification inside the function directly affects the original variable.     */

// // Key Concept

// No copy is created
// Formal parameter becomes an alias of actual parameter
// Both refer to the same memory location
// Changes are reflected outside the function

// **** Syntax
// In C++, pass by reference is implemented using the reference operator &.
/*
    void functionName(int &var) {
        // operations
    }
*/

#include <iostream>
using namespace std;

void modify(int &x) {
    x = x + 10;
    cout << "Inside function: " << x << endl;
}

int main() {
    int a = 5;
    modify(a);
    cout << "Outside function: " << a << endl;
    return 0;
}


// //  Advantages of Pass by Reference

// No extra memory (no copy created)
// Faster for large data (arrays, objects)
// Allows modification of original data

// // Disadvantages

// Can unintentionally modify original data
// Harder to debug if misused

// // When to Use Pass by Reference

//When you want to modify original values
//When passing large data structures
//To improve performance

