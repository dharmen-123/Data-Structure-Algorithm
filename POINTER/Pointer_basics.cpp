
            /* // Pointer  //  */

#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr=&a;
    cout<<a<<endl;      //output - 10
    cout<<&a<<endl;     //         0x61ff08 
    cout<<ptr<<endl;    //         0x61ff08
    cout<<*ptr;         //         10

return 0 ;
}
