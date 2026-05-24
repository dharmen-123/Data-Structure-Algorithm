
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

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
//  bool hasTripletSum(vector<int> &arr, int target) {
//         sort(arr.begin(),arr.end());
//         int n=arr.size(),X=0,start , end;
//         for(int i=0;i<n-2;i++){
//             start=i+1 , end=n-1;
//             X=target-arr[i];
//             while(start<end){
//                 if(arr[start]+arr[end]==X){
//                         return 1;
//                 }
//                 else if(arr[start]+arr[end]>X){
//                         end--;
//                 }
//                 else{
//                         start++;
//                 }
//             } 
//         }
//         return 0;
//     }
// int main(){
//         vector<int>arr={1, 4, 45, 6, 10, 2};
//         int target=13;
//         cout<<hasTripletSum(arr,target);
// return 0 ;
// }

        /* // // Four Elements // //  */

// #include<iostream>
// using namespace std;
// bool find4Numbers(int A[], int n, int X) {
        
//         for(int i=0;i<n-3;i++){
//              for(int j=i+1;j<n-2;j++){
//                 int ans=X-A[i]-A[j];
//                 int start=j+1,end=n-1;
//                 while(start<end){
//                     if(A[start]+A[end]==ans){
//                             return 1;
//                     }
//                     else if(A[start]+A[end]>ans){
//                             end--;
//                     }
//                     else{
//                             start++;
//                     }
//             } 
//              }
//         }
// }
// int main(){
//         int arr[]={1, 5, 1, 0, 6, 0};
//         int target=7;
//         int n=sizeof(arr)/sizeof(arr[0]);
//         cout<<find4Numbers(arr,n,target);

// return 0 ;
// }

        /* // Rotate Matrix by 180deg Clockwise // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void rotateMatrix(vector<vector<int>>& mat) {
//         int row=mat.size(), col=mat[0].size();
//         int k=0;
//         while(k<col){
//           int n=col;
//           for(int i=0;i<row/2;i++){
//                 swap(mat[i][k],mat[n-1][k]);
//                 n--;
//           }
//           k++;
//         }
//         k=0;
//         while(k<col){
//           int n=col;
//           for(int i=0;i<row/2;i++){
//                 swap(mat[k][i],mat[k][n-1]);
//                 n--;
//           }
//           k++;
//         }
//     }
// int main(){
//         // vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
//         vector<vector<int>>matrix={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
//         rotateMatrix(matrix);
//         for(auto k:matrix){
//            for(auto v:k){
//                 cout<<v<<" ";
//            }
//            cout<<endl;
//         }

// return 0 ;
// }

        /* // Search in row-column sorted Matrix  // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool searchMatrix(vector<vector<int>> &mat, int x) {
//         int row=mat.size(), col=mat[0].size();
//         int i=0, j=col-1;
//         while(i<=row && j>=0){
//              if(mat[i][j]==x){
//                  return true;
//              }
//              else if(mat[i][j]>x){
//                 j--;
//              }
//              else{
//                 i++;
//              }
//         }
//         return false;
//     }
// int main(){
//         vector<vector<int>>matrix={{1, 5, 9},
//                                    {14, 20, 21}, 
//                                    {30, 34, 43}};
//         int target = 14;
//         cout<<searchMatrix(matrix,target);


// return 0 ;
// }

          /* // Missing And Repeating  // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> findTwoElement(vector<int>& arr) {
//         int n=arr.size();
//         sort(arr.begin(),arr.end());
//         vector<int>count(n,0);
//         vector<int>result;
//         for(int i=0;i<n;i++){
//             count[arr[i]-1]++;
//         }
//         int missing=0,repeat=arr[0];
//         for(int j=0;j<n;j++){
//                 if(count[j]==2){
//                         repeat=j+1;
//                 }
//                 if(count[j]==0){
//                         missing=j+1;
//                 }
//         }
//         result.push_back(repeat);
//         result.push_back(missing);
//         return result;
// }
// int main(){
//         vector<int>arr={7,5,8,5,2,6,3,4};
//         vector<int>ans=findTwoElement(arr);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }        
// return 0 ;
// }

          /* // Frequencies in a Limited Array  // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> frequencyCount(vector<int>& arr) {
//         int n=arr.size();
//         for(int i=0;i<n;i++){
//                 arr[i]=arr[i]-1;
//         }
//         int rem=0;
//         for(int i=0;i<n;i++){
//              rem=arr[i]%n;
//              arr[rem]+=n;
//         }
//         int div=0;
//         for(int i=0;i<n;i++){
//             div=arr[i]/n;
//             arr[i]=div;
//         }
//         return arr;        
//     }
// int main(){
//         vector<int>arr={2, 3, 2, 3, 5};
//         vector<int>ans=frequencyCount(arr);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }

// return 0 ;
// }


                /* // String Rotated by 2 Places  //  */

// #include<iostream>
// using namespace std;
// void rotateclockwise(string& s1){
//         int n=s1.size();
//         char c=s1[n-1];
//         int index=n-2;
//         while(index>=0){
//              s1[index+1]=s1[index];
//              index--;
//         }
//         s1[0]=c;
// }
// void rotateanticlockwise(string& s1){
//         int n=s1.size();
//         char c=s1[0];
//         int index=1;
//         while(index<n){
//              s1[index-1]=s1[index];
//              index++;
//         }
//         s1[n-1]=c;
// }
// bool isRotated(string& s1, string& s2) {
//         string clockwise=s1, anticlock=s2;
//         rotateclockwise(clockwise);
//         rotateclockwise(clockwise);
//         if(clockwise==s2){
//                 return true;
//         }
//         rotateanticlockwise(s1);
//         rotateanticlockwise(s1);
//         if(s1==s2){
//                 return true;
//         }
//     return false;
//     }
// int main(){
//         // string s1 = "amazon", s2 = "azonam";
//         string s1 = "geeksforgeeks", s2 = "geeksgeeksfor";
//         cout<<isRotated(s1,s2);

// return 0 ;
// }


        /* // Sort a String  //  */

// #include<iostream>
// #include<vector>
// using namespace std;
// string sortString(string &s) {
//         vector<int>alpha(26,0);
//         for(int i=0;i<s.size();i++){
//                 alpha[s[i]-'a']++;
//         }
//         string ans;
//         for(int i=0;i<26;i++){
//                 char c='a'+i;
//                 while(alpha[i]){
//                    ans+=c;
//                    alpha[i]--;
//                 }
//         }
//         return ans;
//     }
// int main(){
//         string s = "edcab";
//         cout<<sortString(s);

// return 0 ;
// }

        /* // Min Chars to Add for Palindrome  // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int minChar(string &s) {
//         string rev=s;
//         reverse(s.begin(),s.end());
//         int size=s.size();
//         string temp = s + '&' + rev;
//         int n = temp.size();
//         vector<int>lps(n,0);
//         int pre=0,suf=1;
//         while(suf<n){
//              if(s[pre]==s[suf]){
//                 lps[suf]=pre+1;
//                 pre++,suf++;
//             }
//             else{
//                 if(pre==0){
//                    suf++;
//                 }
//                 else{
//                    pre=lps[pre-1];
//                 }
//             }
//         }
//         return size-lps[n-1];
//     }
// int main(){
//         string s = "aacecaaa";
//         cout<<minChar(s);

// return 0 ;
// }
// right(2 )
// down(2 )
// def main():