
// // //          arr[5] = {5 ,12 ,56 ,23 ,8}
// // //             ^      0  1   2   3   4  index
// // //             |
// // // array_name_with_size


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={3,6,2,7,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     return 0 ;
// }

    // // Assign a single value in  array // //

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[6]={1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }

// return 0 ;
// }
 
    // //  Taking Array value Input from user  // //

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0 ;
}