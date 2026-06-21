
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

        /*  // Q,54 Sprial Matrix    */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int>spiralOrder(vector<vector<int> >& matrix) {
//         int row=matrix.size(), col = matrix[0].size();
//         int top=0 ,right=col-1 ,bottom=row-1 ,left=0;
//         vector<int>v;
//         while(top<=bottom && left<=right){
//         for(int i=left;i<=right;i++){
//                 v.push_back(matrix[top][i]);
//         }
//         top++;
//         for(int i=top;i<=bottom;i++){
//                 v.push_back(matrix[i][right]);
//         }
//         right--;
//         if(top<=bottom){
//         for(int i=right;i>=left;i--){
//                v.push_back(matrix[bottom][i]);
//         }
//         bottom--;
//         }
//         if(left<=right){
//         for(int i=bottom;i>=top;i--){
//                 v.push_back(matrix[i][left]);
//         }
//         left++;
//         }
//         }
//         return v;
// }
// int main(){
//         // vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//         vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
//         // vector<vector<int>>matrix={{6,9,7}};
//         // vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//         vector<int>ans=spiralOrder(matrix);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }
//         // 1,2,3,4,8,12,11,10,9,5,6,7
// return 0 ;
// }

        /*  // Q.59 Spiral Matrix II  //  */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<vector<int>> generateMatrix(int n) {
//         vector<vector<int>>result(n,vector<int>(n,0));
//         int a=1;
//         int top=0 ,right=n-1 ,bottom=n-1 ,left=0;
//         while(top<=bottom && left<=right){
//         for(int i=left;i<=right;i++){
//                 result[top][i]=a++;
//         }
//         top++;
//         for(int i=top;i<=bottom;i++){
//                 result[i][right]=a++;
//         }
//         right--;
//         if(top<=bottom){
//         for(int i=right;i>=left;i--){
//                result[bottom][i]=a++;
//         }
//         bottom--;
//         }
//         if(left<=right){
//         for(int i=bottom;i>=top;i--){
//                 result[i][left]=a++;
//         }
//         left++;
//         }
//         }
//         return result;
//     }
// int main(){
//         int n=4;
//         vector<vector<int>>ans=generateMatrix(n);
//         for(auto k:ans){
//            for(auto v:k){
//                 cout<<v<<" ";
//            }
//            cout<<endl;
//         }
// return 0 ;
// }

        /* // Q.867 Transpose Matrix // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         int row=matrix.size(),col=matrix[0].size();
//         vector<vector<int>> ans(col, vector<int>(row));
//         for(int i=0; i<row; i++) {
//                 for(int j=0; j<col; j++) {
//                     ans[j][i] = matrix[i][j];
//                 }
//         }
//      return ans;
//     }
// int main(){
//         vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
//         // vector<vector<int>>matrix={{10,6, 2, 10, 10},
//         //                            {7, 8, 8, 9, 3},
//         //                            {4, 1, 8, 3, 10},
//         //                            {2, 1, 1, 1, 10},
//         //                            {3, 4, 7, 3, 10}};
//         // vector<vector<int>>matrix={{1,2,3},{4,5,6}};
//         vector<vector<int>>ans=transpose(matrix);
//         for(auto k:ans){
//            for(auto v:k){
//                 cout<<v<<" ";
//            }
//            cout<<endl;
//         }
// return 0 ;
// }


        /*  // Q.48. Rotate Image by 90deg //  */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void rotate(vector<vector<int>>& matrix) {
//        int row=matrix.size(),col=matrix[0].size();
//         int i=0;
//         while(i<row){
//              int j=i+1;
//              while(j<col){ 
//                 swap(matrix[j][i],matrix[i][j]);
//                 j++;
//               }
//         i++;
//         }
//         int k=0;
//         while(k<col){
//              int n=col;
//              for(int i=0;i<row/2;i++){
//                 swap(matrix[k][i],matrix[k][n-1]);
//                 n--;
//              }
//              k++;
//         }
//     }
// int main(){
//         // vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
//         vector<vector<int>>matrix={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
//         rotate(matrix);
//         for(auto k:matrix){
//            for(auto v:k){
//                 cout<<v<<" ";
//            }
//            cout<<endl;
//         }
// return 0 ;
// }

        /* // Q.74 Search in 2D Matrix //  */

        /* // O(nxlogm) where n=row and m=col  // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size(), col=matrix[0].size();
//         for(int i=0;i<row;i++){
//              if(matrix[i][0]<= target <= matrix[i][row-1]){
//                 int start=0 , end=col-1, mid;
//                 while(start<=end){
//                     mid=(start+end)/2;
//                     if(matrix[i][mid]==target){
//                         return true;
//                     }
//                     else if(matrix[i][mid]>target){
//                         end=mid-1;
//                     }
//                     else{
//                         start=mid+1;
//                     }
//                 }
//                 return false;
//              }  
//         }
//         return false;
//     }
// int main(){
//         // vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//         vector<vector<int>>matrix={{1,3}};
//         int target = 3;
//         cout<<searchMatrix(matrix,target);

// return 0 ;
// }

        /* // O(log(n*m) where n=row and m=col  // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size(), col=matrix[0].size();
//         int start =0 , end=(row*col)-1 , mid;
//         while(start<=end){
//              mid=(start+end)/2;
//              int r_index=mid/col;   
//              int c_index=mid%col;
//              if(matrix[r_index][c_index]==target){
//                    return true;
//              }   
//              else if(matrix[r_index][c_index]<target){
//                    start=mid+1;
//              }
//              else{
//                    end=mid-1;
//              }
//         }
//         return false;
//     }
// int main(){
//         // vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//         vector<vector<int>>matrix={{1,3}};
//         int target = 3;
//         cout<<searchMatrix(matrix,target);

// return 0 ;
// }

                /* // Q.229. Majority Element II  //*/

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<algorithm>
// using namespace std;
// vector<int> majorityElement(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int num : nums) {
//             mp[num]++;
//         }
//         vector<int> ans;
//         for(auto it : mp) {
//             if(it.second > nums.size()/3) {
//                 ans.push_back(it.first);
//             }
//         }
//         return ans;
//     }
// int main(){
//         vector<int>nums={1,2};
//         vector<int>ans=majorityElement(nums);
//         for(auto K:ans){
//                 cout<<K<<" ";
//         }
// return 0 ;
// }

////////////////////////////////////////////////////////////////////////////
                    /*   // STRINGS QUESTIONS //   */
///////////////////////////////////////////////////////////////////////////

        /*   // Q.2785. Sort Vowels in a String  //   */

// #include<iostream>
// #include<vector>
// using namespace std;
// string sortVowels(string s) {
//         vector<int>lower(26,0);
//         vector<int>upper(26,0);
//         for(int i=0;i<s.size();i++){
//                 if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
//                         lower[s[i]-'a']++;
//                         s[i]='#';
//                 }
//                 else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
//                         upper[s[i]-'A']++;
//                         s[i]='#';
//                 }

//         }
//         string vowel;
//         /* // upper */
//         for(int i=0;i<26;i++){
//                 char c='A'+i;
//                 while(upper[i]){
//                         vowel+=c;
//                         upper[i]--;
//                 }
//         }
//         /* // lower */
//         for(int i=0;i<26;i++){
//                char c='a'+i;
//                while(lower[i]){
//                       vowel+=c;
//                       lower[i]--;
//                 }
//         }
//         int first =0 , second=0 ;
//         while(second<vowel.size()){
//                 if(s[first]=='#'){
//                         s[first]=vowel[second];
//                         second++;
//                 }
//            first++;
//         }
//         return s;
//     }
// int main(){
//         string s = "lEetcOde";
//         cout<<sortVowels(s);

// return 0 ;
// }


        /* // Q.3. Longest Substring Without Repeating Characters  // */

// #include<iostream>
// #include<vector>
// using namespace std;
// int lengthOfLongestSubstring(string s) {
//         vector<bool>count(256,0); 
//         int first =0, second =0, len=0;
//         while(second<s.size()){
//                 while(count[s[second]]){
//                         count[s[first]]=0;
//                         first++;
//                 }
//                 count[s[second]]=1;
//                 len=max(len,second-first+1);
//                 second++;
//         }   
//         return len;
//     }
// int main(){
//         string s = "pwwkew";
//         cout<<lengthOfLongestSubstring(s);

// return 0 ;
// }

        /* // Q.151. Reverse Words in a String  //  */

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// string reverseWords(string s) {
//         int n=s.size();
//         int i=0,j=0;
//         while(j<n){
//             while(j<n && s[j]==' '){
//                 j++;
//             }
//             while(j<n && s[j]!=' '){
//                 s[i++]=s[j++];
//             }
//             while(j<n && s[j]==' '){
//                 j++;
//             }
//             if(j<n){
//                 s[i++]=' ';
//             }
//         }
//         s.resize(i);
//         reverse(s.begin(),s.end());
//         int start=0;
//         for(int end=0;end<=s.size();end++){
//            if(end ==s.size() || s[end]==' '){
//                 reverse(s.begin()+start,s.begin()+end);
//                 start=end+1;
//            }
//         }
//         return s;
//     }
// int main(){
//         string s="the sky is blue";
//         cout<<reverseWords(s);

// return 0 ;
// }
    
        /* // Q.3612. Process String with Special Operations I  // */
    
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string processStr(string s) {
//         string result;
//         for(char ch : s) {
//             if(ch >= 'a' && ch <= 'z') {
//                 result += ch;
//             }
//             else if(ch == '*') {
//                 if(!result.empty())
//                     result.pop_back();
//             }
//             else if(ch == '#') {
//                 if(!result.empty())
//                     result +=result;
//             }
//             else {
//                 reverse(result.begin(), result.end());
//             }
//         }

//         return result;
// }
// int main(){
//         // string s="a#b%*";
//         string s="#k#";
//         cout<<processStr(s);

// return 0 ;
// }

        /* // Q.1344. Angle Between Hands of a Clock  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// double angleClock(int hour, int minutes) {
//         double angle;
//         angle=abs((30*hour)-(5.5*minutes));
//         if(angle>180){
//                 angle=360-angle;
//         }
//         return angle;
//     }
// int main(){
//         int hour=3,minutes=15;
//         cout<<angleClock(hour,minutes);

// return 0 ;
// }       

        /* // Q.1833. Maximum Ice Cream Bars  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxIceCream(vector<int>& costs, int coins) {
//          int n=costs.size();
//          int sum=0 ,count=0;
//          sort(costs.begin(),costs.end());
//          for(int i=0;i<n;i++){
//             if((sum+costs[i])<=coins){
//                 sum+=costs[i];
//                 count++;
//             }
//          } 
//          return count;
//     }
// int main(){
//         vector<int>costs ={1,3,2,4,1};
//         // vector<int>costs ={1,6,3,1,2,5};
//         int coins = 7;
//         cout<<maxIceCream(costs,coins);

// return 0 ;
// }

        /* // Q.686. Repeated String Match  //  */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int repeatedStringMatch(string a, string b) {
        
    
// }
// int main(){


// return 0 ;
// }