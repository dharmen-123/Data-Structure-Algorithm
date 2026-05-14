
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

       /* // // Q.875 Koko Eating Bananas  // //  */

// #include<iostream>
// #include<vector>
// using namespace std;
// int minEatingSpeed(vector<int>& piles, int h) {
//         int start=0, end=0, mid , ans, n=piles.size();
//         long long sum=0;
//         for(int i=0;i<n;i++){
//              sum+=piles[i];
//              end=max(end,piles[i]);
//         }
//         start=sum/h;
//         if(!start){
//             start=1;
//         }
//         while(start<=end){
//              mid=start+(end-start)/2;
//              int total_time=0;
//              for(int i=0;i<n;i++){
//                 total_time+=piles[i]/mid;
//                 if(piles[i]%mid){
//                     total_time++;
//                 }
//              }
//              if(total_time>h){
//                 start=mid+1;
//              }
//              else{
//                 ans=mid;
//                 end=mid-1;
//              }
//         }
//         return ans;
//     }
// int main(){
//         vector<int>piles={3,6,7,11};
//         int h=8;
//         cout<<minEatingSpeed(piles,h);

// return 0 ;
// }

        /*  // // Divide Array into 2 sub array with equal sum //   */

// #include<iostream>
// #include<vector>
// using namespace std;
// int SplitArray(vector<int> &arr){
//         int start=0, end=arr.size()-1;
//         int sum1=arr[start],sum2=arr[end];
//         while(start<=end){
//              if(sum1<sum2){
//                 start++;
//                 sum1+=arr[start];
//                 cout<<"sum1 "<<sum1<<endl;
//              }
//              else if(sum1>sum2){
//                 end--;
//                 sum2+=arr[end];
//                 cout<<"sum2 "<<sum2<<endl;
//              }
//              else{
//                 return 1;
//              }   
//         }
//         return 0;
// }
// int main(){
//         vector<int>arr={3,4,-2,5,8,20,-10,8};
//         cout<<SplitArray(arr);

// return 0 ;
// }
