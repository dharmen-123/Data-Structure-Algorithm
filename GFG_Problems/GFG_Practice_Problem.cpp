
     // // Q. Allocation minimumn Number of Pages    //

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int findPages(vector<int> &arr, int K) {
//         int N=arr.size();
//         if(K>N)
//          return -1;
//         int start=0,end=0,mid, ans;
//         for(int i=0;i<N;i++){
//                 start=max(start,arr[i]);
//                 end+=arr[i];
//         }
//         while(start<=end){
//            mid=(start+end)/2;
//            int pages=0, count=1;
//            for(int i=0;i<N;i++){
//                 pages+=arr[i];
//                 if(pages>mid){
//                      count++;
//                      pages=arr[i];
//                 }
//            }
//            if(count<=K){
//                 ans=mid;
//                 end=mid-1;
//            }
//            else{
//                 start=mid+1;
//            }
//         }
//         return ans;
//     }
// int main(){
//         vector<int>arr={12,34,67,90};
//         int m=2;
//         cout<<findPages(arr,m);
// return 0 ;
// }

        // // Q.  Painter's Partition Problem //
    
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int minTime(vector<int>& arr, int k) {
//         int N=arr.size();
//         if(k>N)
//          return -1;
//         int start=0,end=0,mid, ans;
//         for(int i=0;i<N;i++){
//                 start=max(start,arr[i]);
//                 end+=arr[i];
//         }
//         while(start<=end){
//            mid=(start+end)/2;
//            int pages=0, count=1;
//            for(int i=0;i<N;i++){
//                 pages+=arr[i];
//                 if(pages>mid){
//                      count++;
//                      pages=arr[i];
//                 }
//            }
//            if(count<=k){
//                 ans=mid;
//                 end=mid-1;
//            }
//            else{
//                 start=mid+1;
//            }
//         }
//         return ans;       
//     }
// int main(){
//     vector<int>arr={5, 10, 30, 20, 15};
//     int k=3;
//     cout<<minTime(arr,k);

// return 0 ;
// }

        /* //  Aggressive cows //   */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int aggressiveCows(vector<int> &stalls, int k) {
//         int start=1,end, mid, ans , n=stalls.size();
//         sort(stalls.begin(),stalls.end());
//         end=stalls[n-1]-stalls[0];
//         while(start<=end){
//            mid=(start+end)/2;
//            int count=1 , position = stalls[0];
//            for(int i=1;i<n;i++){
//                 if(position+mid<=stalls[i]){
//                         count++;
//                         position=stalls[i];
//                 }
//            }
//            if(count<k){
//                 end=mid-1;
//            }
//            else{
//                 ans=mid;
//                 start=mid+1;
//            }
//         }
//         return ans;
//     }
// int main(){
//         vector<int>stalls={1, 2, 4, 8, 9};
//         int k=3;
//         cout<<aggressiveCows(stalls,k);
        
// return 0 ;
// }

        /*  // // Segregate 0s and 1s // //  */

// #include<iostream>
// #include<vector>
// using namespace std;
// void segregate0and1(vector<int> &arr) {
//         int count0=0,count1=0 , n=arr.size();
//         for(int i=0;i<n;i++){
//                 if(arr[i]==0){
//                         count0++;
//                 }
//                 else{
//                         count1++;
//                 }
//         }
//         int index=0;
//         while(count0>0){
//                 arr[index++]=0;
//                 count0--;
//         }
//         while(count1>0){
//                 arr[index++]=1;
//                 count1--;
//         }
// }
// int main(){
//         vector<int>arr={0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
//         segregate0and1(arr);
//         for(auto k:arr){
//                 cout<<k<<" ";
//         }

// return 0 ;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void segregate0and1(vector<int> &arr) {
//         int start=0, end=arr.size()-1;
//         while(start<=end){
//                 if((arr[start]==1 && arr[end]==0)){
//                         swap(arr[start],arr[end]);
//                         start++;
//                         end--;
//                 }
//                 else if(arr[start]==0){
//                         start++;
//                 }
//                 else if(arr[start]==1 && arr[end]==1){
//                         end--;
//                 }
//                 else{
//                         start++;
//                 }
//         }
// }
// int main(){
//         vector<int>arr={1,1};
//         segregate0and1(arr);
//         for(auto k:arr){
//                 cout<<k<<" ";
//         }

// return 0 ;
// }

        /*  // Kadane's Algorithm  //  */

// #include<iostream>
// #include<vector>
// using namespace std;
// int maxSubarraySum(vector<int> &arr) {
//         int Prefix=0, maxi=INT16_MIN, n=arr.size();
//         for(int i=0;i<n;i++){
//              Prefix+=arr[i];
//              maxi=max(maxi,Prefix);
//              if(Prefix<0){
//                  Prefix=0;
//              }
//         }
//         return maxi;
//     }
// int main(){
//         vector<int>arr={2, 3, -8, 7, -1, 2, 3};
//         cout<<maxSubarraySum(arr);

// return 0 ;
// }

        /*  // Triplet Sum in Array  //  */

#include<iostream>
#include<vector>
using namespace std;
 bool hasTripletSum(vector<int> &arr, int target) {
        int n=arr.size(),X=0,start , end;
        for(int i=0;i<n-2;i++){
            start=i+1 , end=n-1;
            X=target-arr[0];
            while(start<end){
                if(arr[start]+arr[end]==X){
                        return 1;
                }
                else if(arr[start]+arr[end]>X){
                        end--;
                }
                else{
                        start++;
                }
            } 
        }
        return 0;
    }
int main(){
        vector<int>arr={1, 4, 45, 6, 10, 2};
        int target=13;
        cout<<hasTripletSum(arr,target);

return 0 ;
}