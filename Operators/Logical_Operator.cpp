
   // // **** LOGICAL OPERATOR  **** // //

//Logical operator is used to combine the condition and return the answer in Boolean form

//  && (AND)  The AND operator returns true only when both conditions are true.
//  || (OR)   The OR operator returns true if at least one condition is true.
//   ! (NOT)  The NOT operator reverses the result:

    // // **** AND Operator **** // //

// #include<iostream>
// using namespace std;
// int main(){
//     int age = 25;
//     if (age > 18 && age < 60) {
//          cout<<"Eligible for job";
//         }
// }

    // // **** OR Operator **** // //

#include<iostream>
using namespace std;
int main(){
    int marks = 35;
    if (marks >= 40 || marks >= 30) {
        cout << "Passed";
    }
}