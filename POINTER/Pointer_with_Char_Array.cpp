
            /*  //  Pointer with Char Array  //  */

// #include<iostream>
// using namespace std;

// int main(){
//     char arr[5]="1234";
//     char *ptr= arr;
//     cout<<arr<<endl;        //- 1234
//     cout<<ptr<<endl;        //- 1234

//     /* Print the address using (void*) pointer */
//     cout<<(void*)arr<<endl;     //- 0x61ff07
//     cout<<(void*)ptr<<endl;     //- 0x61ff07

// return 0 ;
// }


#include<iostream>
using namespace std;

int main(){
    char name='a';
    cout<<name<<endl;
    char *ptr1= &name;
    cout<<ptr1<<endl;
    cout<<(void*)ptr1<<endl;
    cout<<(void*)name<<endl;

return 0 ;
}