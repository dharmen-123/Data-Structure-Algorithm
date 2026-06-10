
        /*  // ** Problems on Recursion ** //  */

    /* // Print 1 to N number // */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Print(int n){
        if(n==0){
            return ;
        }
        Print(n-1);
        cout<<n<<" ";
}
int main(){
    int n=20;
    Print(n);
return 0 ;
}
