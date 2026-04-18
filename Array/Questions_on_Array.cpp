
    // //  Maximum element of array // // 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr1[5]={6,2,8,13,26};
//     int n=sizeof(arr1)/sizeof(arr1[0]);
//     int ans=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr1[i]>ans){
//             ans=arr1[i];
//         }
//     }
//     cout<<"Maximum value is :"<<ans;
// return 0 ;
// }

    // //  Minimum element of array // // 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr1[5]={6,2,8,13,26};
//     int ans= INT_MAX ;
//     int n=sizeof(arr1)/sizeof(arr1[0]);
//     for(int i=0;i<n;i++){
//         if(arr1[i]<ans){
//             ans=arr1[i];
//         }
//     }
//     cout<<"Minimum value is :"<<ans;
// return 0 ;
// }

    // // // Search an Element in Array return index// // //

// #include<iostream>
// using namespace std;

// int main(){
//     int arr1[5]={6,2,8,13,26};
//     int target=13;
//     int n=sizeof(arr1)/sizeof(arr1[0]);
//     for(int i=0;i<n;i++){
//         if(arr1[i]==target){
//             cout<<i;
//             return 0;
//         }
//     }
//     cout<<-1;

// return 0 ;
// }

    // // // Reverse an Array // // //

// #include<iostream>
// using namespace std;

// int main(){
//         int arr2[5]={1,2,3,4,5};
//         int n=sizeof(arr2)/sizeof(arr2[0]);
//         int s=0 ,e=n-1;
//         while(s<e){
//             swap(arr2[s],arr2[e]);
//             s++;
//             e--;
//         }
//         for(int i=0;i<n;i++){
//             cout<<arr2[i]<<" ";
//         }

// return 0 ;
// }