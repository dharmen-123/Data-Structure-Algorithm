
                /* // Pointer_in_Array // */

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={10,20,30,40,50};
//     int *ptr1 = &arr[0];
//     int *ptr2 = &arr[1];
//     int *ptr3 = &arr[2];
//     cout<<&arr<<endl;
//     cout<<ptr1<<endl;
//     cout<<ptr2<<endl;
//     cout<<ptr3<<endl;
//     cout<<*ptr1<<endl;
//     cout<<*(ptr1+1)<<endl;
//     cout<<*arr<<endl;
//     cout<<*(arr+1)<<endl;
//     /* // Print all address */
//     for(int i=0;i<5;i++){
//         cout<<arr+i<<endl;
//     }
//     /* // Print all values */
//     for(int i=0;i<5;i++){
//         cout<<*(arr+i)<<endl;
//     }
// return 0 ;

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *ptr=arr;
//     for(int i=0 ;i<5;i++){
//         cout<<*ptr<<endl;
//         ptr++;
//     }

// return 0 ;
// }