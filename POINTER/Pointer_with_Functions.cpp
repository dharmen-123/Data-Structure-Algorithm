
        /*  // Pointer With Functions  //  */

// #include<iostream>
// using namespace std;
// void increment(int *ptr){
//      *ptr = *ptr+1;
// }
// int main(){
//         int num=10;
//         int temp=num;
//         cout<<temp<<endl;
//         increment(&num);
//         cout<<num<<endl;

// return 0 ;
// }



#include<iostream>
using namespace std;
void func(int *ptr){
    for(int i=0;i<5;i++){
        ptr[i]=2*ptr[i];
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    func(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
return 0 ;
}