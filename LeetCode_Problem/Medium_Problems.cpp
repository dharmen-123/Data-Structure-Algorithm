
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

/* // Q.70. Climbing Stairs  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int climbStairs(int n) {
//         if(n<=1){
//             return 1;
//         }
//         int p1=1,p2=1,curr;
//         for(int i=2;i<=n;i++){
//                 curr=p1+p2;
//                 p1=p2;
//                 p2=curr;
//         }
//         return p2;
//     }
// int main(){
//         int n=5;
//         cout<<climbStairs(n);

// return 0 ;
// }

/* // Q.912. Sort an Array  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void merge(vector<int>& nums, int low, int mid, int high) {
//     vector<int> temp;
//     int i = low, j = mid + 1;
//     while (i <= mid && j <= high) {
//         if (nums[i] <= nums[j])
//             temp.push_back(nums[i++]);
//         else
//             temp.push_back(nums[j++]);
//     }

//     while (i <= mid)
//         temp.push_back(nums[i++]);

//     while (j <= high)
//         temp.push_back(nums[j++]);

//     for (int k = low; k <= high; k++)
//         nums[k] = temp[k - low];
// }
// void mergesort(vector<int>& nums, int low, int high) {
//     if (low >= high)
//         return;
//     int mid = low + (high - low) / 2;
//     mergesort(nums, low, mid);
//     mergesort(nums, mid + 1, high);
//     merge(nums, low, mid, high);
// }
// vector<int> sortArray(vector<int>& nums) {
//     mergesort(nums, 0, nums.size() - 1);
//     return nums;
// }
// int main(){
//     vector<int>nums={5,2,7,6,1,4,8,3,9};
//     vector<int>ans=sortArray(nums);
//     cout << "Sorted array: ";
//     for(int x : ans)
//        cout << x << " ";
// return 0 ;
// }

/* // Q.49. Group Anagrams  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        unordered_map<string,vector<string>>mp;
//        vector<vector<string>>ans;
//         for(int i=0;i<strs.size();i++){
//            string key=strs[i];
//            sort(key.begin(),key.end());
//            mp[key].push_back(strs[i]);
//         }
//         for(auto it=mp.begin();it!=mp.end();it++){
//                 ans.push_back(it->second);
//         }
//         return ans;
// }
// int main(){
//         vector<string>strs={"eat","tea","tan","ate","nat","bat"};
//         vector<vector<string>>result=groupAnagrams(strs);
//         for(auto k:result){
//             for(auto a:k)
//                 cout<<a<<" ";
//           cout<<",";
//         }
// return 0 ;
// }

/* // Q.78. Subsets  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void Subsequence(vector<int>& nums,int index ,int n,vector<vector<int>>& ans,vector<int>& temp){
//         if(index==n){
//             ans.push_back(temp);
//             return ;
//         }
//         Subsequence(nums,index+1,n,ans,temp);
//         temp.push_back(nums[index]);
//         Subsequence(nums,index+1,n,ans,temp);
//         temp.pop_back();
// }
// vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>temp;
//         Subsequence(nums,0,nums.size(),ans,temp);
//       return ans;
//     }
// int main(){
//         vector<int>nums={1,2,3};
//          vector<vector<int>>ans=subsets(nums);
//         for(auto k:ans){
//                 cout<<"{";
//             for(auto a:k){
//                 cout<<a<<" ";
//              }
//              cout<<"} , ";
//         }

// return 0 ;
// }

/* // Q.22. Generate Parentheses  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void parenthsis(int n,int left , int right , vector<string>& ans, string &temp){
//        if(left==n && right ==n){
//          ans.push_back(temp);
//          return;
//        }
//        if(left<n){
//         temp.push_back('(');
//         parenthsis(n,left+1,right,ans,temp);
//         temp.pop_back();
//        }
//        if(right<left){
//         temp.push_back(')');
//         parenthsis(n,left,right+1,ans,temp);
//         temp.pop_back();
//        }
// }
// vector<string> generateParenthesis(int n) {
//         vector<string>ans;
//         string temp;
//         parenthsis(n,0,0,ans,temp);
//    return ans;
// }
// int main(){
//         int n=3;
//         vector<string>ans=generateParenthesis(n);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }
// return 0 ;
// }

/* // Q.90. Subsets II  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void Subsequence(vector<int>& nums,int index ,int n,vector<vector<int>>& ans,vector<int>& temp){
//         ans.push_back(temp);
//         for(int i=index;i<n;i++){
//         if(i>index && nums[i]==nums[i-1])
//              continue;
//         temp.push_back(nums[i]);
//         Subsequence(nums,i+1,n,ans,temp);
//         temp.pop_back();
//         }
// }
// vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>temp;
//         sort(nums.begin(),nums.end());
//         Subsequence(nums,0,nums.size(),ans,temp);
//       return ans;
//     }
// int main(){
//         vector<int>nums={1,2,2};
//         vector<vector<int>>ans=subsetsWithDup(nums);
//         for(auto k:ans){
//                 cout<<"{";
//             for(auto a:k){
//                 cout<<a<<" ";
//              }
//              cout<<"} , ";
//         }
// return 0 ;
// }

/* // Q.494. Target Sum  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int Counter(vector<int>& nums, int target, int index,int n,int sum, int &count){
//         if(index==n){
//            if(target==sum) count++;
//           return count;
//         }
//         //Not Included
//         Counter(nums,target,index+1,n,sum+nums[index],count);
//         //Included
//         Counter(nums,target,index+1,n,sum-nums[index],count);
//    return count;
// }
// int findTargetSumWays(vector<int>& nums, int target) {
//       int count=0;
//       return Counter(nums,target,0,nums.size(),0,count);

//     }
// int main(){
//         vector<int>nums={1,1,1,1,1};
//         int target=3;
//         cout<<findTargetSumWays(nums,target);

// return 0 ;
// }

/* // Q.46. Permutations  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void Combination(vector<int>nums,int n,vector<vector<int>>& ans,vector<int>&temp,vector<bool>&visited){
//         if(n==temp.size()){
//             ans.push_back(temp);
//             return ;
//         }
//         for(int i=0;i<n;i++){
//             if(visited[i]==0){
//                 visited[i]=1;
//                 temp.push_back(nums[i]);
//                 Combination(nums,n,ans,temp,visited);
//                 visited[i]=0;
//                 temp.pop_back();
//             }
//         }
// }
// vector<vector<int>> permute(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>>ans;
//         vector<int>temp;
//         vector<bool>visited(n,0);
//         Combination(nums,n,ans,temp,visited);
//         return ans;
//     }
// int main(){
//         vector<int>nums={1,2,3};
//         vector<vector<int>>result=permute(nums);
//         for(auto k:result){
//                 cout<<"[";
//                 for(auto a:k){
//                         cout<<a<<" ";
//                 }
//                 cout<<"],";
//         }
// return 0 ;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void Combination(vector<int>& nums,vector<vector<int>>& ans,int index){
//         if(nums.size()==index){
//             ans.push_back(nums);
//             return ;
//         }
//         for(int i=index;i<nums.size();i++){
//                 swap(nums[index],nums[i]);
//                 Combination(nums,ans,index+1);
//                 swap(nums[index],nums[i]);
//         }
// }
// vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>>ans;
//         Combination(nums,ans,0);
//         return ans;
//     }
// int main(){
//          vector<int>nums={1,2,3};
//         vector<vector<int>>result=permute(nums);
//         for(auto k:result){
//                 cout<<"[";
//                 for(auto a:k){
//                         cout<<a<<" ";
//                 }
//                 cout<<"],";
//         }
// return 0 ;
// }

/* // Q.47. Permutations II  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void Combination(vector<int>& nums,vector<vector<int>>& ans,int index){
//         if(nums.size()==index){
//             ans.push_back(nums);
//             return ;
//         }
//         vector<bool>use(21,0);
//         for(int i=index;i<nums.size();i++){
//              if(use[nums[i]+10]==0){
//                 swap(nums[i],nums[index]);
//                 Combination(nums,ans,index+1);
//                 swap(nums[i],nums[index]);
//                 use[nums[i]+10]=1;
//                 }
//         }
// }
// vector<vector<int>> permuteUnique(vector<int>& nums) {
//         vector<vector<int>>ans;
//         Combination(nums,ans,0);
//         return ans;
//     }
// int main(){
//         vector<int>nums={1,1,2};
//         vector<vector<int>>result=permuteUnique(nums);
//         for(auto k:result){
//                 cout<<"[";
//                 for(auto a:k){
//                    cout<<a<<" ";
//                 }
//                 cout<<"],";
//         }
// return 0 ;
// }

/* // Q.31. Next Permutation  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void nextPermutation(vector<int>& nums) {
//         int n = nums.size();
//         int i = n - 2;
//         while (i >= 0 && nums[i] >= nums[i+1]) {
//             i--;
//         }
//         if (i >= 0) {
//             int j = n - 1;
//             while (nums[j] <= nums[i]) {
//                 j--;
//             }
//             swap(nums[i], nums[j]);
//         }
//         reverse(nums.begin() + i + 1, nums.end());
//     }
// int main(){
//         vector<int>nums={1,2,3};
//         nextPermutation(nums);
//         for(auto k:nums){
//                 cout<<k<<" ";
//         }
// return 0 ;
// }

/* // Q.3974. Maximum Total Sum of K Selected Elements // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// long long maxSum(vector<int>& nums, int k, int mul) {
//         sort(nums.begin(),nums.end());
//         long long totalsum=0;
//         for(int i=nums.size()-1;i>=0 && k>0;i--){
//             totalsum=totalsum+max((long long)nums[i], (long long)nums[i] * mul);
//             mul--;
//             k--;
//         }
//         return totalsum;
// }
// int main(){
//         vector<int>nums={4,4};
//         int k=1, mul=1;
//         cout<<maxSum(nums,k,mul);

// return 0 ;
// }

/* // Q.3975. Filter Occupied Intervals  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals,int freeStart, int freeEnd) {
//         sort(occupiedIntervals.begin(), occupiedIntervals.end());
//         vector<vector<int>> merged;
//         for (auto interval : occupiedIntervals) {
//             if (merged.empty() || interval[0] > merged.back()[1] + 1)             {
//                 merged.push_back(interval);
//             }
//             else {
//                 merged.back()[1] = max(merged.back()[1], interval[1]);
//             }
//         }
//         vector<vector<int>> ans;
//         for (auto interval : merged) {
//             int l = interval[0];
//             int r = interval[1];
//             if (r < freeStart || l > freeEnd) {
//                 ans.push_back({l, r});
//             }
//             else {
//                 if (l < freeStart) {
//                     ans.push_back({l, freeStart - 1});
//                 }
//                 if (r > freeEnd) {
//                     ans.push_back({freeEnd + 1, r});
//                 }
//             }
//         }
//         return ans;
//     }
// int main(){
//    vector<vector<int>>occupiedIntervals = {{2,6},{4,8},{10,10},{10,12},{14,16}};
//    int freeStart = 7, freeEnd = 11;
//    vector<vector<int>>result=filterOccupiedIntervals(occupiedIntervals,freeStart,freeEnd);
//   for(auto k:result){
//         for(auto a:k){
//                 cout<<a<<" ";
//         }
//         cout<<endl;
//   }
// return 0 ;
// }

/* // Q.1846. Maximum Element After Decreasing and Rearranging // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
//         sort(arr.begin(), arr.end());
//         arr[0] = 1;
//         for(int i = 1; i < arr.size(); i++) {
//             arr[i] = min(arr[i], arr[i - 1] + 1);
//         }
//         return arr[arr.size()-1];
//     }
// int main(){
//         vector<int>arr={2,2,1,2,1};
//         // vector<int>arr={100,1,1000};
//         cout<<maximumElementAfterDecrementingAndRearranging(arr);

// return 0 ;
// }

/* // Q.1358. Number of Substrings Containing All Three Characters // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int numberOfSubstrings(string s) {
//     int n = s.size();
//     int count = 0;
//     vector<int> freq(3, 0);
//     int left = 0;

//     for (int right = 0; right < n; right++) {
//         freq[s[right] - 'a']++;
//         while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
//             count += n - right;
//             freq[s[left] - 'a']--;
//             left++;
//         }
//     }
//     return count;
//     }
// int main(){
//      string s="abcabc";
//      cout<<numberOfSubstrings(s);

// return 0 ;
// }

/* // 238. Product of Array Except Self //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> productExceptSelf(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> result(n, 1);
//     int prefix = 1;
//     for(int i = 0; i < n; i++) {
//         result[i] = prefix;
//         prefix *= nums[i];
//     }
//     int suffix = 1;
//     for(int i = n-1; i >= 0; i--) {
//         result[i] *= suffix;
//         suffix *= nums[i];
//     }
//     return result;
//     }
// int main(){
// //     vector<int>nums = {1,2,3,4};
//     vector<int>nums = {-1,1,0,-3,3};
// //     vector<int>nums = {-1,1,0,-3,0};
//     vector<int>result=productExceptSelf(nums);
//     for(auto k:result){
//         cout<<k<<" ";
//     }
// return 0 ;
// }

/* // Q.3979. Maximum Valid Pair Sum // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxValidPairSum(vector<int>& nums, int k) {
//         int first=nums[0];
//         int ans=0;
//         for(int i=k;i<nums.size();i++){
//                 first=max(first,nums[i-k]);
//                 ans=max(ans,first+nums[i]);
//         }
//         return ans;
//     }
// int main(){
//         vector<int>nums={1,3,5,2,8};
//         int k=2;
//         cout<<maxValidPairSum(nums,k);

// return 0 ;
// }

/* // Q. 334. Increasing Triplet Subsequence // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool increasingTriplet(vector<int>& nums) {
//         int n=nums.size();
//         int f=INT_MAX,s=INT_MAX;
//         for(int i=0;i<n;i++){
//                 if(nums[i]<=f){
//                     f=nums[i];
//                 }
//                 else if(nums[i]<=s){
//                     s=nums[i];
//                 }
//                 else{
//                         return true;
//                 }
//         }
//         return false;
//     }
// int main(){
//         // vector<int>nums={1,2,3,4,5};
//         // vector<int>nums={5,4,3,2,1};
//         vector<int>nums={2,1,5,0,4,6};
//         cout<<increasingTriplet(nums);

// return 0 ;
// }

/* // Q.443. String Compression // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int compress(vector<char>& chars) {
//         int n=chars.size();
//         int count=0;
//         string s;
//         for(int i=0;i<n;i++){
//             count++;
//               if( i==n-1 || chars[i]!=chars[i+1]){
//                    s+=chars[i];
//                    if(count>1)
//                         s+=to_string(count);
//                    count=0;
//               }
//         }
//         chars.clear();
//         for (char ch : s)
//             chars.push_back(ch);
//         return chars.size();
//     }
// int main(){
//         // vector<char>chars = {'a','a','b','b','c','c','c'};
//         // vector<char>chars = {'a'};
//         vector<char>chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
//         cout<<compress(chars);

// return 0 ;
// }

/* // Q.2390. Removing Stars From a String // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string removeStars(string s) {
//         stack<char>s1;
//         for(int i=0;i<s.size();i++){
//              if(s[i]=='*'){
//                 if(!s1.empty())
//                     s1.pop();
//              }
//              else{
//                 s1.push(s[i]);
//              }
//         }
//         s.clear();
//         while(!s1.empty()){
//                 s+=s1.top();
//                 s1.pop();
//         }
//         reverse(s.begin(),s.end());
//         return s;
//     }
// int main(){
//         // string s = "leet**cod*e";
//         string s = "erase*****";
//         cout<<removeStars(s);
// return 0 ;
// }

/* // Q.394 Decode-String // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string decodeString(string s) {
//         stack<int> countStack;
//         stack<string> stringStack;
//         string currString = "";
//         int currNum = 0;
//         for(char ch : s) {
//             if(isdigit(ch)) {
//                 currNum = currNum * 10 + (ch - '0');
//             }
//             else if(ch == '[') {
//                 countStack.push(currNum);
//                 stringStack.push(currString);

//                 currNum = 0;
//                 currString = "";
//             }
//             else if(ch == ']') {
//                 int repeat = countStack.top();
//                 countStack.pop();
//                 string prev = stringStack.top();
//                 stringStack.pop();
//                 while(repeat--) {
//                     prev += currString;
//                 }
//                 currString = prev;
//             }
//             else {
//                 currString += ch;
//             }
//         }
//         return currString;
// }
// int main(){
//         // string s = "3[a]2[bc]";
//         string s = "3[a2[c]]";
//         cout<<decodeString(s);

// return 0 ;
// }

/* // Q.1456. Maximum Number of Vowels in a Substring of Given Length // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxVowels(string s, int k) {
//         int count=0,maxvowel=0,currtvowel=0;
//         for(int i=0;i<s.size();i++){
//                 count++;
//                 if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
//                     currtvowel+=1;
//                 }
//                 if(count==k){
//                     maxvowel=max(maxvowel,currtvowel);
//                     if(s[i+1-k]=='a' || s[i+1-k]=='e' || s[i+1-k]=='i' || s[i+1-k]=='o' || s[i+1-k]=='u'){
//                         currtvowel-=1;
//                     }
//                     count--;
//                 }
//         }
//         return maxvowel;
//     }
// int main(){
//         string s = "abciiidef";
//         // string s = "leetcode";
//         int k = 3;
//         cout<<maxVowels(s,k);

// return 0 ;
// }

/* // Q.2215. Find the Difference of Two Arrays // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//         vector<vector<int> >ans(2);
//         unordered_set<int>s1(nums1.begin(),nums1.end());
//         unordered_set<int>s2(nums2.begin(),nums2.end());
//         for(auto x:s1){
//               if(!s2.count(x)){
//                   ans[0].push_back(x);
//               }
//         }
//         for(auto x:s2){
//               if(!s1.count(x)){
//                   ans[1].push_back(x);
//               }
//         }
//         return ans;
//     }
// int main(){
//         vector<int>nums1 = {1,2,3},nums2 = {2,4,6};
//         // vector<int>nums1 = {1,2,3,3}, nums2 = {1,1,2,2};
//         vector<vector<int>>result=findDifference(nums1,nums2);
//         for(auto k:result){
//                 for(auto a:k){
//                         cout<<a<<" ";
//                 }
//                 cout<<" , ";
//         }

// return 0 ;
// }

/* // Q.1493. Longest Subarray of 1's After Deleting One Element // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int longestSubarray(vector<int>& nums) {
//         int left = 0;
//         int zero = 0;
//         int ans = 0;
//         for (int right = 0; right < nums.size(); right++) {
//             if (nums[right] == 0)
//                 zero++;
//             while (zero > 1) {
//                 if (nums[left] == 0)
//                     zero--;
//                 left++;
//             }
//             ans = max(ans, right - left);
//         }
//         return ans;
//     }
// int main(){
//         vector<int>nums = {1,1,0,1};
//         // vector<int>nums = {1,1,1};
//         // vector<int>nums = {0,1,1,1,0,1,1,0,1};
//         cout<<longestSubarray(nums);

// return 0 ;
// }

/* ********************************************************* */
/*      LINKED LIST      */
/* ********************************************************* */

/* // Q.19. Remove Nth Node From End of List  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class ListNode{
//      public:
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int count=0;
//         ListNode *temp=head;
//         while(temp!=NULL){
//             count++;
//             temp=temp->next;
//         }
//         temp=head;
//         count-=n;
//         if(count==0){
//              head=head->next;
//              delete temp;
//              return head;
//         }
//         ListNode *prev=NULL;
//         while(count--){
//            prev=temp;
//            temp=temp->next;
//         }
//         prev->next=temp->next;
//         delete temp;

//     return head;
// }

// int main(){
//         ListNode *Head=new ListNode(1);
//         ListNode *n2=new ListNode(2);
//         ListNode *n3=new ListNode(3);
//         ListNode *n4=new ListNode(4);
//         ListNode *n5=new ListNode(5);
//         Head->next=n2;
//         n2->next=n3;
//         n3->next=n4;
//         n4->next=n5;

//         int n=2;
//         Head=removeNthFromEnd(Head,n);

//         /* Print the linked List */
//         ListNode *temp=Head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }

/* // Q.61. Rotate List  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class ListNode{
//      public:
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// ListNode* rotateRight(ListNode* head, int k) {
//         if(head==NULL || head->next==NULL)
//                 return head;
//         int count=0;
//         ListNode *temp=head;
//         while(temp){
//            count++;
//            temp=temp->next;
//         }
//         temp=head;
//         k=k%count;
//         if(k==0){
//             return head;
//         }
//         count-=k;
//         ListNode *curr=head;
//         ListNode *prev=NULL;
//         while(count--){
//              prev=curr;
//              curr=curr->next;
//         }
//         ListNode *Tail=curr;
//         prev->next=NULL;
//         while(Tail->next!=NULL){
//              Tail=Tail->next;
//         }
//         Tail->next=head;
//         return curr;
//     }

// int main(){
//         ListNode *Head=new ListNode(1);
//         ListNode *n2=new ListNode(2);
//         ListNode *n3=new ListNode(3);
//         ListNode *n4=new ListNode(4);
//         ListNode *n5=new ListNode(5);
//         Head->next=n2;
//         n2->next=n3;
//         n3->next=n4;
//         n4->next=n5;

//         int k=2;
//         Head=rotateRight(Head,k);

//         /* Print the linked List */
//         ListNode *temp=Head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }

/* // Q.328. Odd Even Linked List  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class ListNode{
//      public:
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// ListNode* oddEvenList(ListNode* head) {
//       if(head == NULL || head->next == NULL)
//         return head;

//       ListNode *odd = head;
//       ListNode *even = head->next;
//       ListNode *evenHead = even;

//       while(even != NULL && even->next != NULL){
//           odd->next = even->next;
//           odd = odd->next;
//           even->next = odd->next;
//           even = even->next;
//       }
//       odd->next = evenHead;
//     return head;
// }

// int main(){
//         ListNode *Head=new ListNode(1);
//         ListNode *n2=new ListNode(2);
//         ListNode *n3=new ListNode(3);
//         ListNode *n4=new ListNode(4);
//         ListNode *n5=new ListNode(5);
//         ListNode *n6=new ListNode(6);
//         ListNode *n7=new ListNode(7);
//         ListNode *n8=new ListNode(8);
//         Head->next=n2;
//         n2->next=n3;
//         n3->next=n4;
//         n4->next=n5;
//         n5->next=n6;
//         n6->next=n7;
//         n7->next=n8;
//         Head=oddEvenList(Head);

//         /* Print the linked List */
//         ListNode *temp=Head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }

/* // Q.2095. Delete the Middle Node of a Linked List // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class ListNode{
//      public:
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// ListNode* deleteMiddle(ListNode* head) {
//         int count=0;
//         ListNode *temp=head;
//         if(head->next==NULL){
//               return NULL;
//         }
//         while(temp){
//            count++;
//            temp=temp->next;
//         }
//         count=count/2;
//         ListNode *curr=head;
//         ListNode *prev=NULL;
//         while(count--){
//              prev=curr;
//              curr=curr->next;
//         }
//         prev->next=curr->next;

//    return head;
//     }

// int main(){
//         ListNode *Head=new ListNode(2);
//         ListNode *n2=new ListNode(1);
//         ListNode *n3=new ListNode(3);
//         ListNode *n4=new ListNode(4);
//         ListNode *n5=new ListNode(1);
//         ListNode *n6=new ListNode(2);
//         ListNode *n7=new ListNode(6);
//         Head->next=n2;
//         n2->next=n3;
//         n3->next=n4;
//         n4->next=n5;
//         n5->next=n6;
//         n6->next=n7;

//         Head=deleteMiddle(Head);
//         /* Print the linked List */
//         ListNode *temp=Head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }

/* // Q.24. Swap Nodes in Pairs  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class ListNode{
//      public:
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// ListNode* swapPairs(ListNode* head) {
//         if(head==NULL || head->next==NULL)
//              return head;
//         ListNode* newHead = head->next;

//         ListNode* prev = head;
//         ListNode* curr = head->next;
//         ListNode* prevPrev = nullptr;

//         while(curr != NULL) {
//             ListNode* nextPair = curr->next;
//             curr->next = prev;
//               if(prevPrev != nullptr) {
//                   prevPrev->next = curr;
//               }
//             prevPrev = prev;
//             prev = nextPair;
//             if(nextPair != NULL) {
//                 curr = nextPair->next;
//             } else {
//                 curr = NULL;
//             }
//         }
//         if(prevPrev != NULL) {
//             prevPrev->next = prev;
//         }
//     return newHead;
//     }

// int main(){
//         ListNode *Head=new ListNode(1);
//         ListNode *n2=new ListNode(2);
//         ListNode *n3=new ListNode(3);
//         ListNode *n4=new ListNode(4);
//         Head->next=n2;
//         n2->next=n3;
//         n3->next=n4;

//         Head=swapPairs(Head);

//         /* Print the linked List */
//         ListNode *temp=Head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }

/* // Q.82. Remove Duplicates from Sorted List II  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class ListNode{
//      public:
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// ListNode* deleteDuplicates(ListNode* head) {
//         if(head==NULL || head->next==NULL){
//              return head;
//         }
//         ListNode dummy(0);
//         dummy.next = head;
//         ListNode* Tail=&dummy;
//         ListNode* curr=head;
//         while(curr){
//                 if(curr->next && curr->val == curr->next->val){
//                     int x = curr->val;
//                 while(curr && curr->val == x){
//                         ListNode* temp = curr;
//                         curr = curr->next;
//                         delete temp;
//                 }
//                 Tail->next = curr;
//                 }
//                 else{
//                     Tail->next = curr;
//                     Tail = curr;
//                     curr = curr->next;
//                     Tail->next = NULL;
//                  }
//         }
//     return dummy.next;
// }

// int main(){
//         ListNode *Head=new ListNode(1);
//         ListNode *n2=new ListNode(1);
//         ListNode *n3=new ListNode(1);
//         ListNode *n4=new ListNode(2);
//         ListNode *n5=new ListNode(3);
//         Head->next=n2;
//         n2->next=n3;
//         n3->next=n4;
//         n4->next=n5;

//         Head=deleteDuplicates(Head);

//         /* Print the linked List */
//         ListNode *temp=Head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }

/* // Q.143. Reorder List  // */

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class ListNode
// {
// public:
//         int val;
//         ListNode *next;
//         ListNode() : val(0), next(nullptr) {}
//         ListNode(int x) : val(x), next(nullptr) {}
//         ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// void reorderList(ListNode *head){
//       if(head==NULL || head->next==NULL){
//            return ;
//       }
//       ListNode *curr=head;
//       while(curr!=NULL && curr->next!=NULL){
//               ListNode *Tail=curr;
//               ListNode *prev=NULL;
//               while(Tail->next!=NULL){
//                       prev=Tail;
//                       Tail=Tail->next;
//               }
//               // Stop the operation when curr and Tail are same or next
//               if(curr==Tail || curr->next==Tail){
//                       break;
//               }
//              // remove last node from list
//               prev->next=NULL;
//               //Insert the Tail node after current node
//               Tail->next=curr->next;
//               curr->next=Tail;
//               // Mode Curr node after Inserting Tail node
//               curr=Tail->next;
//       }
// }

// int main()
// {
//         ListNode *Head = new ListNode(1);
//         ListNode *n2 = new ListNode(2);
//         ListNode *n3 = new ListNode(3);
//         ListNode *n4 = new ListNode(4);
//         ListNode *n5 = new ListNode(5);
//         Head->next = n2;
//         n2->next = n3;
//         n3->next = n4;
//         n4->next = n5;

//         reorderList(Head);

//         /* Print the linked List */
//         ListNode *temp = Head;
//         while (temp != NULL)
//         {
//                 cout << temp->val << " ";
//                 temp = temp->next;
//         }
//         return 0;
// }

/* // Q.147. Insertion Sort List  // */

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class ListNode
// {
// public:
//         int val;
//         ListNode *next;
//         ListNode() : val(0), next(nullptr) {}
//         ListNode(int x) : val(x), next(nullptr) {}
//         ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// ListNode* insertionSortList(ListNode* head) {
//         ListNode dummy(0);
//         while(head){
//              ListNode* curr=head;
//              head=head->next;
//              ListNode* prev=&dummy;
//              while(prev->next && prev->next->val<curr->val){
//                      prev=prev->next;
//              }
//            curr->next=prev->next;
//            prev->next=curr;
//         }

//     return dummy.next;

// }

// int main()
// {
//         ListNode *Head = new ListNode(-1);
//         ListNode *n2 = new ListNode(5);
//         ListNode *n3 = new ListNode(3);
//         ListNode *n4 = new ListNode(4);
//         ListNode *n5 = new ListNode(0);
//         Head->next = n2;
//         n2->next = n3;
//         n3->next = n4;
//         n4->next = n5;

//         Head=insertionSortList(Head);

//         /* Print the linked List */
//         ListNode *temp = Head;
//         while (temp != NULL)
//         {
//                 cout << temp->val << " ";
//                 temp = temp->next;
//         }
//         return 0;
// }

/* // Q.2487. Remove Nodes From Linked List // */

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class ListNode
// {
// public:
//         int val;
//         ListNode *next;
//         ListNode() : val(0), next(nullptr) {}
//         ListNode(int x) : val(x), next(nullptr) {}
//         ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// ListNode* reverselist(ListNode* Head){
//         if(Head==NULL){
//            return NULL;
//         }
//         ListNode *temp=Head;
//         ListNode *prev=NULL;
//         while(temp->next!=NULL){
//              temp=Head->next;
//              Head->next=prev;
//              prev=Head;
//              Head=temp;
//         }
//        Head->next=prev;
//        return Head;
// }
// ListNode* removeNodes(ListNode* head) {
//         head=reverselist(head);
//         ListNode* curr=head->next;
//         ListNode* prev=head;
//         while(curr!=NULL){
//              if(prev->val>curr->val){
//                 prev->next=curr->next;
//                 curr=prev->next;
//              }
//              else{
//                 prev=curr;
//                 curr=curr->next;
//              }
//         }
//         return reverselist(head);
//     }

// int main()
// {
//         ListNode *Head = new ListNode(5);
//         ListNode *n2 = new ListNode(2);
//         ListNode *n3 = new ListNode(13);
//         ListNode *n4 = new ListNode(3);
//         ListNode *n5 = new ListNode(8);
//         Head->next = n2;
//         n2->next = n3;
//         n3->next = n4;
//         n4->next = n5;

//         Head=removeNodes(Head);

//         /* Print the linked List */
//         ListNode *temp = Head;
//         while (temp != NULL)
//         {
//                 cout << temp->val << " ";
//                 temp = temp->next;
//         }
//         return 0;
// }

/* // Q.2181. Merge Nodes in Between Zeros  // */

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class ListNode
// {
// public:
//         int val;
//         ListNode *next;
//         ListNode() : val(0), next(nullptr) {}
//         ListNode(int x) : val(x), next(nullptr) {}
//         ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// ListNode* mergeNodes(ListNode* head) {
//         ListNode dummy(0);
//         ListNode* Tail=&dummy;
//         int sum=0;
//         ListNode* curr=head->next;
//         while(curr->next!=NULL){
//               if(curr->val!=0){
//                   sum+=curr->val;
//               }
//               else{
//                   ListNode* temp=new ListNode(sum);
//                   Tail->next=temp;
//                   Tail=Tail->next;
//                   sum=0;
//               }

//               curr=curr->next;
//         }
//         ListNode* temp=new ListNode(sum);
//         Tail->next=temp;
//         Tail=Tail->next;
//         return dummy.next;
// }

// int main()
// {
//         ListNode *Head = new ListNode(0);
//         ListNode *n2 = new ListNode(1);
//         ListNode *n3 = new ListNode(0);
//         ListNode *n4 = new ListNode(3);
//         ListNode *n5 = new ListNode(0);
//         ListNode *n6 = new ListNode(2);
//         ListNode *n7 = new ListNode(2);
//         ListNode *n8 = new ListNode(0);
//         Head->next = n2;
//         n2->next = n3;
//         n3->next = n4;
//         n4->next = n5;
//         n5->next = n6;
//         n6->next = n7;
//         n7->next = n8;

//         Head=mergeNodes(Head);

//         /* Print the linked List */
//         ListNode *temp = Head;
//         while (temp != NULL)
//         {
//                 cout << temp->val << " ";
//                 temp = temp->next;
//         }
//         return 0;
// }

/* // Q.1721. Swapping Nodes in a Linked List // */

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class ListNode
// {
// public:
//         int val;
//         ListNode *next;
//         ListNode() : val(0), next(nullptr) {}
//         ListNode(int x) : val(x), next(nullptr) {}
//         ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// ListNode* swapNodes(ListNode* head, int k) {
//         ListNode* curr=head;
//         int n=0;
//         while(curr!=NULL){
//                n++;
//               curr=curr->next;
//         }
//         curr=head;
//         vector<int>arr(n,0);
//         int i=0;
//         while(curr!=NULL){
//               arr[i]=curr->val;
//               curr=curr->next;
//               i++;
//         }
//         swap(arr[k-1],arr[arr.size()-k]);
//         curr=head;
//         i=0;
//         while(curr!=NULL){
//              curr->val=arr[i];
//              curr=curr->next;
//              i++;
//         }
//     return head;
//     }

// int main()
// {
//         ListNode *Head = new ListNode(7);
//         ListNode *n2 = new ListNode(9);
//         ListNode *n3 = new ListNode(6);
//         ListNode *n4 = new ListNode(6);
//         ListNode *n5 = new ListNode(7);
//         ListNode *n6 = new ListNode(8);
//         ListNode *n7 = new ListNode(3);
//         ListNode *n8 = new ListNode(0);
//         ListNode *n9 = new ListNode(9);
//         ListNode *n10 = new ListNode(5);
//         Head->next = n2;
//         n2->next = n3;
//         n3->next = n4;
//         n4->next = n5;
//         n5->next = n6;
//         n6->next = n7;
//         n7->next = n8;
//         n8->next = n9;
//         n9->next = n10;

//         int k=5;
//         Head=swapNodes(Head,k);

//         /* Print the linked List */
//         ListNode *temp = Head;
//         while (temp != NULL)
//         {
//                 cout << temp->val << " ";
//                 temp = temp->next;
//         }
//         return 0;
// }

/* // Q.921. Minimum Add to Make Parentheses Valid // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int minAddToMakeValid(string s) {
//         stack<char>st;
//         int count=0;
//         for(int i=0;i<s.size();i++){
//                 if(s[i]=='('){
//                         st.push(s[i]);
//                 }
//                 else{
//                     if(st.empty()){
//                         count++;
//                     }
//                     else{
//                         st.pop();
//                     }
//                 }
//         }
//         return count+st.size();
// }
// int main(){
//         string s = "(((";
//         cout<<minAddToMakeValid(s);

// return 0 ;
// }

/* // Q.540. Single Element in a Sorted Array // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int singleNonDuplicate(vector<int>& nums) {
//         int n=nums.size();
//         if(n==1){
//              return nums[0];
//         }
//         int count=0;
//         for(int i=0;i<n-1;i++){
//                 count++;
//               if(nums[i]!=nums[i+1]){
//                  if(count==1){
//                         return nums[i];
//                  }
//                  count=0;
//               }

//         }
//         return nums[n-1];

// }
// int main(){
//         // vector<int>nums={1,1,2,3,3,4,4,8,8};
//         vector<int>nums={3,3,7,7,10,11,11};
//         cout<<singleNonDuplicate(nums);

// return 0 ;
// }

/* // Q.155. Min Stack  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class MinStack {
//     stack<int>s1;
//     stack<int>s2;
// public:
//     MinStack() {

//     }
//     void push(int value) {
//         s1.push(value);
//         if(s2.empty()){
//             s2.push(value);
//         }
//         else{
//             s2.push(min(s2.top(),value));
//         }
//     }
//     void pop() {
//         if(!s1.empty()){
//             s1.pop();
//             s2.pop();
//         }
//     }
//     int top() {
//         return s1.top();
//     }
//     int getMin() {
//         return s2.top();
//     }
// };
// int main(){
//     MinStack st;
//     st.push(-2);
//     st.push(0);
//     st.push(-3);
//     cout << "Current Minimum : " << st.getMin() << endl;
//     st.pop();
//     cout << "Top Element : " << st.top() << endl;
//     cout << "Current Minimum : " << st.getMin() << endl;
//     st.push(-5);
//     cout << "Top Element : " << st.top() << endl;
//     cout << "Current Minimum : " << st.getMin() << endl;
//     st.push(10);
//     cout << "Top Element : " << st.top() << endl;
//     cout << "Current Minimum : " <<st.getMin() << endl;
//     st.pop();
//     cout << "Top Element : " << st.top() << endl;
//     cout << "Current Minimum : " << st.getMin() << endl;

// return 0 ;
// }

/* // Q.3016. Minimum Number of Pushes to Type Word II  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int minimumPushes(string word) {
//        unordered_map<char,int>freq;
//        for(auto x:word){
//           freq[x]++;
//        }
//        vector<int>v;
//        for(auto x:freq){
//           v.push_back(x.second);
//        }
//        sort(v.begin(), v.end(), greater<int>());
//        int ans=0;
//        for(int i=0;i<v.size();i++){
//           ans+=((i/8)+1)*v[i];
//        }
//        return ans;
//     }
// int main(){
//         string word="xyzxyzxyzxyz";
//         // string word="aabbccddeeffgghhiiiiii";
//         cout<<minimumPushes(word);

// return 0 ;
// }

/* // Q.4007 Count Subarrays With Even Odd Ratio I  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int countRatioSubarrays(vector<int>& nums, int a, int b) {
//     int n = nums.size();
//      long long ans = 0;
//     for(int i=0;i<n;i++) {
//         int even = 0;
//         int odd = 0;
//         for(int j=i;j<n;j++) {
//             if(nums[j]%2==0)
//                 even++;
//             else
//                 odd++;
//             if(odd>0 && even*b<=odd*a)
//                 ans++;
//         }
//     }
//     return ans;
// }
// int main(){
//         // vector<int>nums = {1,2,1,2};
//         vector<int>nums = {2,2,1};
//         int  a = 2, b = 1;
//         cout<<countRatioSubarrays(nums,a,b);
// return 0 ;
// }

                /* // Q.73. Set Matrix Zeroes // */

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void setZeroes(vector<vector<int>> &matrix){
//         int row = matrix.size();
//         int col = matrix[0].size();
//         int col0 = 1;
//         for (int i = 0; i < row; i++){
//                 if (matrix[i][0] == 0)
//                         col0 = 0;
//                 for (int j = 1; j < col; j++){
//                         if (matrix[i][j] == 0){
//                                 matrix[i][0] = 0;
//                                 matrix[0][j] = 0;
//                         }
//                 }
//         }
//         for (int i = row - 1; i >= 0; i--){
//            for (int j = col - 1; j >= 1; j--){
//                 if (matrix[i][0] == 0 || matrix[0][j] == 0)
//                         matrix[i][j] = 0;
//           }
//           if (col0 == 0)
//               matrix[i][0] = 0;
//         }
// }
// int main()
// {
//         // vector<vector<int>>matrix = {{1,1,1},{1,0,1},{1,1,1}};
//         vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
//         setZeroes(matrix);
//         for (auto k : matrix)
//         {
//                 for (auto a : k)
//                 {
//                         cout << a << " ";
//                 }
//                 cout << endl;
//         }

//         return 0;
// }


        /* // Q.92. Reverse Linked List II // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class ListNode {
//     public:
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(head == NULL || left == right)
//         return head;
//         ListNode* dummy = new ListNode(0);
//         dummy->next = head;
//         ListNode* prev = dummy;
//         for(int i = 1; i < left; i++) {
//             prev = prev->next;
//         }
//         ListNode* curr = prev->next;
//         for(int i = 0; i < right - left; i++) {
//             ListNode* temp = curr->next;
//             curr->next = temp->next;
//             temp->next = prev->next;
//             prev->next = temp;
//         }
//         return dummy->next;

//     }
// int main(){
//         ListNode *head =new ListNode(1);
//         ListNode *n2 =new ListNode(2);
//         ListNode *n3 =new ListNode(3);
//         ListNode *n4 =new ListNode(4);
//         ListNode *n5 =new ListNode(5);
//         head->next=n2;
//         n2->next=n3;
//         n3->next=n4;
//         n4->next=n5;
//         int left=2 ,right=4;
//         head=reverseBetween(head,left,right);

//        /* Print the linked List */
//         ListNode *temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }

// return 0 ;
// }

        /* // Q.4027 Maximum Gap Between Stations // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maximumGap(string skill, string station) {
//         int n=skill.size();
//         int m=station.size();
//         vector<int>r(n);
//         int j = m - 1;
//         for (int i = n - 1; i >= 0; i--) {
//             while (station[j] != skill[i]) 
//                 j--;
//             r[i] = j--;
//         }
//         int ans = 0, p = 0;
//         for (int i = 0; i < n - 1; i++) {
//             while (station[p] != skill[i]) 
//                 p++;
//             ans = max(ans, r[i + 1] - p);
//             p++;
//         }
//     return ans;
// }
// int main(){
//         string skill = "aa", station = "aaaa";
//         // string skill = "xyz", station = "xyzz";
//         cout<<maximumGap(skill,station);

// return 0 ;
// }

       /* // Q.4026 Minimize the Maximum Waiting Time at Synchronized Traffic Lights // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
//         int maxGreen = INT_MIN;
//         for(auto k:lights){
//               maxGreen=max(maxGreen,k);  
//         }
//         int ans = 0;
//         for (int t : arrivalTime) {
//             int r = t % period;
//             if (r >= maxGreen)
//                ans = max(ans, period - r);
//         }
//     return ans;
        
// }
// int main(){
//         int  period = 8; 
//         vector<int>lights = {2,3};
//         vector<int>arrivalTime = {2,5,8,11};
//         // int  period = 10; 
//         // vector<int>lights = {3,6,8};
//         // vector<int>arrivalTime = {4,9,15};
//         cout<<minPenalty(period,lights,arrivalTime);

// return 0 ;
// }


        /* // Q.6. Zigzag Conversion // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string convert(string s, int numRows) {
//         if (numRows == 1 || numRows >= s.size()) 
//                 return s;
//         string result;
//         for (int i = 0; i < numRows; i++) {
//             int j = i;
//             int downStep = 2 * (numRows - 1 - i);
//             int upStep   = 2 * i;
//             bool down = true;
    
//             while (j < s.size()) {
//                 result += s[j];
//                 if (i == 0) {
//                     j += 2 * (numRows - 1); 
//                 } else if (i == numRows - 1) {
//                     j += 2 * (numRows - 1); 
//                 } else {
//                     j += down ? downStep : upStep;
//                     down = !down;
//                 }
//             }
//         }
//     return result;
// }
// int main(){
//         string s="PAYPALISHIRING";
//         int numRows=3;
//         cout<<convert(s,numRows);

// return 0 ;
// }


                /* // Q.56. Merge Intervals // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> merge(vector<vector<int>>& intervals) {
//     int n=intervals.size();
//     sort(intervals.begin(),intervals.end());
//     vector<vector<int>>ans;
//     for(int i=0;i<n;i++){
//         if(ans.empty() || intervals[i][0]>ans.back()[1])
//             ans.push_back(intervals[i]);
//         else
//             ans.back()[1]=max(ans.back()[1],intervals[i][1]);
//     }
//   return ans;
// }
// int main(){
//     vector<vector<int>>intervals={{1,3},{2,6},{8,10},{15,18}};
//     vector<vector<int>>ans=merge(intervals);
//     for(auto k:ans){
//         for(auto a:k){
//             cout<<a<<" ";
//         }
//         cout<<" , ";
//     }
// return 0 ;
// }


        /* // Q.57. Insert Interval  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//         int n=intervals.size();
//         vector<vector<int>>ans=intervals;
//         intervals.clear();
//         bool inserted=false;
//         for(int i=0;i<n;i++){
//             if(!inserted && ans[i][0]>newInterval[0]){
//                 intervals.push_back(newInterval);
//                 inserted=true;
//             }
//             intervals.push_back(ans[i]);
//         }
//         if(!inserted)
//             intervals.push_back(newInterval);

//         ans.clear();
//         for(int i=0;i<intervals.size();i++){
//             if(ans.empty() || intervals[i][0]>ans.back()[1]){
//                 ans.push_back(intervals[i]);
//             }
//             else{
//                 ans.back()[1]=max(ans.back()[1],intervals[i][1]);
//             }
//         }
//        return  ans; 
// }
// int main(){
//     vector<vector<int>>intervals={{1,2},{3,5},{6,7},{8,10},{12,16}};
//     vector<int>newInterval={4,8};
//     vector<vector<int>>ans=insert(intervals,newInterval);
//     for(auto k:ans){
//         for(auto a:k){
//             cout<<a<<" ";
//         }
//         cout<<" , ";
//     }
// return 0 ;
// }


            /* // Q.4039 Sum of Decoded Numbers   //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// long long MOD = 1000000007;
// long long power(long long x, long long y) {
//         long long ans = 1;
//         while (y > 0) {
//             if (y & 1) {
//                 ans = (ans * x) % MOD;
//             }
//             x = (x * x) % MOD;
//             y >>= 1;
//         }
//         return ans;
//     }
// int sumDecoded(vector<long long>& nums) {
//         long long ans = 0;
//         for (long long num : nums) {
//             int width = num % 10;
//             long long d = num / 10;
//             string s = to_string(d);
//             long long x = stoll(s.substr(0, width));
//             long long y = stoll(s.substr(width));
//             ans = (ans + power(x, y)) % MOD;
//         }

//      return ans;
// }
// int main(){
//     // vector<long long>nums={2522,2101};
//     vector<long long>nums={35601441351,223903157794458};
//     cout<<sumDecoded(nums);

// return 0 ;
// }

        /* // Q.2091. Removing Minimum and Maximum From Array  // */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minn = 0;
        int maxx = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minn]) {
                minn = i;
            }
            if (nums[i] > nums[maxx]) {
                maxx= i;
            }
        }
        int left = min(minn, maxx);
        int right = max(minn, maxx);

        int i = right + 1;
        int j = n - left;
        int k = (left + 1) + (n - right);
        return min(i, min(j, k));
}
int main(){
        vector<int>nums={2,10,7,5,4,1,8,6};
        cout<<minimumDeletions(nums);

return 0 ;
}