
        // // Q.852 Peak index in a Mountain Array //

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int peakIndexInMountainArray(vector<int>& arr){
//     int start=0, end=arr.size()-1 , mid;
//     while(start<=end){
//         mid=end+(start-end)/2;
//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//             return mid;
//         }
//         else if(arr[mid>arr[mid-1]]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }        
//     return mid;
//     }
// int main(){
//     vector<int>arr = {1,6,3,2,1};
//     cout<<peakIndexInMountainArray(arr);

// return 0 ;
// }

        // // Q. Rotated Array   //

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int RotatedArray(vector<int>& arr , int x){
        int start=0, end=arr.size()-1, mid, ans;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[0]<arr[mid]){
                start=mid+1;
            }
            else if(arr[0]>arr[mid]){
                end=mid-1;
            }
            else{
                ans=mid;
            }
        }
        return ans;
}
int main(){
    vector<int>arr={4,6,8,10,1,2};
    int x=10;
    cout<<RotatedArray(arr,x);

return 0 ;
}