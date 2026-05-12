
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