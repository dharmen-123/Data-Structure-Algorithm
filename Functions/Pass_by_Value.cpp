
    // // ***** PASS BY VALUE ***** // //

    /* Pass by Value is a method of passing arguments to a function where 
    a copy of the actual parameter is passed, not the original variable. 
    Any changes made inside the function do not affect the original value. */

//Pass by Value means:
//The function receives a separate copy of the variable, and operations are performed on that copy.

// ****  Key Concept

// Original variable → Actual Parameter
// Function parameter → Formal Parameter
// Data is copied from actual → formal
// Memory locations are different

#include<iostream>
using namespace std;

void modify(int x){
    x=x+5;
    cout<<"Inside function x = "<<x<<endl;

}
int main(){
    int x=5;
    modify(x);
    cout<<"Outside function x = "<<x;
}

// // Advantages of Pass by Value

//  Safe (original data not modified)
//  No side effects
//  Easy to understand and debug

// // Disadvantages

//  Extra memory used (copy created)
//  Not efficient for large data (arrays, objects)
//  Cannot modify original variable

