
    
    // // ****** Q.342 Power of Two ****** // //

// #include<iostream>
// using namespace std;
// bool isPowerOfFour(int n){
//         if(n<1)
//             return 0;
//         if(n==1)
//             return 1;
//         while(n!=4){
//             if(n%4==1 || n%4==2 || n%4==3){ 
//                     return 0;
//                 }
//             n/=4;
//         }
//         return 1;
// }
// int main(){
//       cout<<isPowerOfFour(1)<<endl;
// }

    // //  Convert the character from small to capital or vice versa // //

// #include<iostream>
// using namespace std;

// char charconvert(char name){
//     char ans = name-'a'+'A';
//     return ans;
// }

// int main(){
//     char letter;
//     cout<<"Enter any charater for conversion : ";
//     cin>>letter;
//     cout<<charconvert(letter);

// return 0 ;
// }

    // // Armstrong Number  // //

// #include<iostream>
// using namespace std;
// bool Armstrong(int n){
//     int m=n,num=n ,rem , count=0, ans=0;
//     while(n>0){
//         n/=10;
//         count++;
//     }
//     while(m>0){
//         rem=m%10;
//         int val=rem;
//         for(int i=1;i<count;i++){
//                 val=rem*val;
//         }
//         ans=ans+val;
//         m/=10;
//     }
//     if(ans!=num){
//         return 0;
//     }
//     return 1;
// }

// int main(){
//      int n;
//      cout<<"Enter the number : ";
//      cin>>n;
//      cout<<Armstrong(n);
//     return 0 ;
// }

         // //  Reverse bits //  //

// #include <iostream>
// using namespace std;
// int Reversebits(int n) {
//     int binary[32];
//     int m=sizeof(binary)/sizeof(binary[0]);
//     for (int i = 31; i >= 0; i--) {
//         binary[i]=((n >> i) & 1);
//     }
//    long long ans=0,mul=1;
//     while(m>0){
//       ans=binary[m-1]*mul+ans;
//       mul*=2;
//       m--;
//     }
//     return ans;
// }

// int main() {
//     int n = 43261596;
//     Reversebits(n);
//     return 0;
// }

    // // Q.35  Search Insert Position //

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int searchInsert(vector<int>& arr, int target){
//         int start=0 ,end=arr.size()-1,ans=arr.size(), mid;
//         while(start<=end){
//             if(arr[mid]==target){
//                 ans=mid;   
//                 return mid;
//             }
//             else if(arr[mid]<target){
//                     start=mid+1;

//             }
//             else{
//                     ans=mid;
//                     end = mid-1;
//             }
//         }

// }
// int main(){
//         vector<int>arr={1,3,5,6};
//         int target=2;
//         searchInsert(arr,target);
//         for(auto x:arr){
//             cout<<x<<" ";
//         }
// return 0 ;
// }

        // // Q.69 SQRT(x) //

// #include<iostream>
// using namespace std;
// int mySqrt(int x) {
//     int ans,start=1,end=x , mid;
//     if(x<2){
//         return x;
//     }
//     while(start<=end){
//         mid=start+(end-start)/2;
//         if(mid==x/mid){
//             ans=mid;
//             break;
//         }
//         else if(mid>x/mid){
//             end=mid-1;
//         }
//         else{
//             ans=mid;
//             start=mid+1;
//         }
//     }    
//     return ans;
//     }
// int main(){
//         int x;
//         cout<<"Enter the Number to check the square root: ";
//         cin>>x;
//         cout<<mySqrt(x);
// return 0 ;
// }

 // // Q.1539  Kth Missing Positive Number   //

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int findKthPositive(vector<int>& arr, int k) {
//      int start=0, end=arr.size()-1 , mid, ans=arr.size();
//      while(start<=end){
//         mid=start+(end-start)/2;
//         if(arr[mid]-mid-1>=k){
//                 ans=mid;
//                 end=mid-1;
//         }
//         else{
//                 start=mid+1;
//         }
//      }   
//      return ans+k;
//     }
// int main(){
//         vector<int>arr={1,2,3,4};
//         int k=2;
//         cout<<findKthPositive(arr,k);
// return 0 ;
// }

        /* // // Q.1 Two Sum // // */
        /* // //  O(nlogn) complexity */

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> twoSum(vector<int>& nums, int target) {
//         int start=0,end=0,n=nums.size();
//         vector<int>v;
//         for(int i=0;i<n;i++){
//             int x=target-nums[i];
//             start=i+1;
//             end=n-1;
//             while(start <= end) {
//               int mid = start + (end - start)/2;  
//               if(nums[mid] == x){
//                     v.push_back(i);
//                     v.push_back(mid);
//                     break;
//               }
//               else if(nums[mid] < x) 
//                     start = mid + 1;
//               else 
//                     end = mid - 1;
//             }
//         }
//         return v;
// }
// int main(){
//     vector<int>nums={0,4,3,0};
//     int target=0;
//     vector<int>r=twoSum(nums,target);
//     for(auto k:r){
//         cout<<k<<" ";
//     }
// return 0 ;
// }

        /* // // Q.  PlusOne // //  */

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// vector<int> plusOne(vector<int>& digits) {
//     int n=digits.size();
//         for(int i=n-1;i>=0;i--){
//             if(digits[i]<9){
//                 digits[i]++;
//                 return digits;
//             }
//             digits[i]=0;
//         }
//         digits.insert(digits.begin(),1);
//         return digits;
//     }
// int main(){
//     vector<int>digits={4,3,2,1};
//     vector<int>ans=plusOne(digits);
//     for(auto k:ans){
//         cout<<k<<" ";
//     }
// return 0 ;
// }

        /* //  Q.121 Best Time to Buy and Sell Stock  // */

#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
        int buy = INT16_MAX;
        int profit = 0;
        for(int i=0; i<prices.size(); i++) {
            if(prices[i] < buy) {
                buy = prices[i];
            }
            profit = max(profit, prices[i] - buy);
        }
        return profit;
    }
int main(){
        vector<int>prices={2,4,1};
        cout<<maxProfit(prices);

return 0 ;
}