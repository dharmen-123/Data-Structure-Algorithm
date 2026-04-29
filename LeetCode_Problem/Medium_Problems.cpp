
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

        // // Q.153 Find Minimum in Rotated Sorted Array   //

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int findMin(vector<int>& nums){
//         int start=0, end=nums.size()-1, mid, ans=nums[0];
//         while(start<=end){
//             mid=start+(end-start)/2;
//             if(nums[0]<=nums[mid]){
//                 start=mid+1;
//             }
//             else{
//                 ans=nums[mid];
//                 end=mid-1;
//             }
//         }
//         return ans;
// }
// int main(){
//     vector<int>nums={4,6,8,10,1,2};
//     cout<<findMin(nums);
// return 0 ;
// }

        // // Q.33 Search in Rotated Sorted Array //

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int search(vector<int>& nums, int target) {
//         int start=0,end=nums.size()-1, mid;
//         while(start<=end){
//            mid=start+(end-start)/2;
//            if(nums[mid]==target){
//                 return mid;
//            }
//            else if(nums[mid]>=nums[0]){
//                 if(nums[start]<=target && nums[mid]>target){
//                         end=mid-1;
//                 }
//                 else{
//                         start=mid+1;
//                 }
//            }
//            else{
//                 if(nums[end]>=target && nums[mid]<target){
//                         start=mid+1;
//                 }
//                 else{
//                         end=mid-1;
//                 }
//            }
//         }
//         return -1;
//     }
// int main(){
//         vector<int>nums={4,5,6,7,0,1,2};
//         int target=3;
//         cout<<search(nums, target);

// return 0 ;
// }

           // // Q.1539  Kth Missing Positive Number   //

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int>& arr, int k) {
        
    }
int main(){


return 0 ;
}