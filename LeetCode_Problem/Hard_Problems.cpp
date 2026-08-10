
/* // // Q.42 Trapping Rain Water // // */

// #include<iostream>
// #include<vector>
// using namespace std;
// int trap(vector<int>& height) {
//         int n=height.size(),water=0;
//         int leftmax=0, rightmax=0,maxheight=height[0],index=0;
//         //Max height of building
//         for(int i=1;i<n;i++){
//             if(maxheight<height[i]){
//                 maxheight=height[i];
//                 index=i;
//             }
//         }
//         //Left part
//             for(int i=0;i<index;i++){
//                 if(leftmax>height[i]){
//                     water+=leftmax-height[i];
//                 }
//                 else{
//                     leftmax=height[i];
//                 }
//             }
//         // Right part
//           for(int i=n-1;i>index;i--){
//                 if(rightmax>height[i]){
//                     water+=rightmax-height[i];
//                 }
//                 else{
//                     rightmax=height[i];
//                 }
//             }
//         return water;
//     }

// int main(){
//         vector<int>height={0,1,0,2,1,0,1,3,2,1,2,1};
//         cout<<"Total water : "<<trap(height);

// return 0 ;
// }

/*  // Q.41. First Missing Positive  // */

// #include<iostream>
// #include<vector>
// using namespace std;
// int firstMissingPositive(vector<int>& nums) {
//         int n=nums.size();
//         int j=0;
//         while(j<n){
//             while(nums[j] > 0 && nums[j] <= n &&
//                   nums[j] != nums[nums[j]-1])
//             {
//                 swap(nums[j], nums[nums[j]-1]);
//             }
//          j++;
//         }
//         for(int i=0;i<n;i++){
//             if(nums[i]!= i+1){
//                 return i+1;
//             }
//         }
//      return n+1;
//     }
// int main(){
//         // vector<int>nums={3,4,-1,1};
//         vector<int>nums={7,8,9,11,12};
//         cout<<firstMissingPositive(nums);

// return 0 ;
// }

/* // Q.84. Largest Rectangle in Histogram  // */

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int largestRectangleArea(vector<int> &heights)
// {
//     int n = heights.size();
//     vector<int> left(n);
//     vector<int> right(n);
//     stack<int> st;
//     /* Next Smallest Right */
//     for (int i = 0; i < n; i++)
//     {
//         while (!st.empty() && heights[st.top()] > heights[i])
//         {
//             right[st.top()] = i;
//             st.pop();
//         }
//         st.push(i);
//     }
//     while(!st.empty()){
//         right[st.top()]=n;
//         st.pop();
//     }
//     /* Next Smallest Left */
//     for (int i = n - 1; i >= 0; i--)
//     {
//         while (!st.empty() && heights[st.top()] >= heights[i])
//         {
//             left[st.top()] = i;
//             st.pop();
//         }
//         st.push(i);
//     }
//     while (!st.empty())
//     {
//         left[st.top()] = -1;
//         st.pop();
//     }
//     /* Find maximum area */
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = max(ans, heights[i] * (right[i] - left[i] - 1));
//     }

//     return ans;
// }
// int main()
// {
//     vector<int> heights = {2, 1, 5, 6, 2, 3};
//     // vector<int> heights = {1,1};
//     cout << largestRectangleArea(heights);

//     return 0;
// }

/* //         2nd method
  Q.84. Largest Rectangle in Histogram   // */

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int largestRectangleArea(vector<int> &heights)
// {
//     int n = heights.size();
//     stack<int> st;
//     int ans = 0;
//     int index;
//     for (int i = 0; i < n; i++)
//     {
//         while (!st.empty() && heights[st.top()] > heights[i])
//         {
//             index = st.top();
//             st.pop();
//             if (!st.empty())
//             {
//                 ans = max(ans, heights[index] * (i - st.top() - 1));
//             }
//             else
//             {
//                 ans = max(ans, heights[index] * i);
//             }
//         }
//         st.push(i);
//     }
//     while (!st.empty())
//     {
//         index = st.top();
//         st.pop();
//         if (!st.empty())
//         {
//             ans = max(ans, heights[index] * (n - st.top() - 1));
//         }
//         else
//         {
//             ans = max(ans, heights[index] * n);
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> heights = {2, 1, 5, 6, 2, 3};
//     // vector<int> heights = {1,1};
//     cout << largestRectangleArea(heights);
//     return 0;
// }

            /* // Q.85. Maximal Rectangle  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int largestRectangleArea(vector<int> &heights)
// {
//     int n = heights.size();
//     stack<int> st;
//     int ans = 0;
//     int index;
//     for (int i = 0; i < n; i++)
//     {
//         while (!st.empty() && heights[st.top()] > heights[i])
//         {
//             index = st.top();
//             st.pop();
//             if (!st.empty())
//             {
//                 ans = max(ans, heights[index] * (i - st.top() - 1));
//             }
//             else
//             {
//                 ans = max(ans, heights[index] * i);
//             }
//         }
//         st.push(i);
//     }
//     while (!st.empty())
//     {
//         index = st.top();
//         st.pop();
//         if (!st.empty())
//         {
//             ans = max(ans, heights[index] * (n - st.top() - 1));
//         }
//         else
//         {
//             ans = max(ans, heights[index] * n);
//         }
//     }
//     return ans;
// }
// int maximalRectangle(vector<vector<char>>& matrix) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         int ans=0;
//         vector<int>heights(col,0);
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 if(matrix[i][j]=='0'){
//                     heights[j]=0;
//                 }
//                 else{
//                     heights[j]+=1;
//                 }
//             }
//             ans=max(ans,largestRectangleArea(heights));
//         }
//       return ans;
//     }
// int main(){
//         vector<vector<char>>matrix={{'1','0','1','0','0'},
//                                       {'1','0','1','1','1'},
//                                       {'1','1','1','1','1'},
//                                       {'1','0','0','1','0'}};
//         cout<<maximalRectangle(matrix);
        
// return 0 ;
// }


        /* // 239. Sliding Window Maximum  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         if(nums.size()==1)
//              return nums;   
//         deque<int>q;
//         vector<int>ans;
//         for(int i=0;i<k-1;i++){
//             while(!q.empty() && nums[i]>nums[q.back()]){
//                     q.pop_back();
//             }
//             q.push_back(i);
//         }
//         for(int i=k-1;i<nums.size();i++){
//             while(!q.empty() && nums[i]>nums[q.back()]){
//                     q.pop_back();
//             }    
//             q.push_back(i);
//             if(q.front()<=(i-k))
//             q.pop_front();    
//             ans.push_back(nums[q.front()]);
//         }
//         return ans;
// }
// int main(){
//       vector<int>nums={1,3,-1,-3,5,3,6,7};
//       int k=3;
// //       vector<int>nums={4,3,7,5,2,3,1,2,8,7};
// //       int k=4;
//       vector<int>ans=maxSlidingWindow(nums,k);
//       for(auto k:ans)
//           cout<<k<<" ";

// return 0 ;
// }

          /* // Q.995. Minimum Number of K Consecutive Bit Flips  //  */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minKBitFlips(vector<int>& nums, int k) {
        queue<int>q;
        int flip=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
               if(!q.empty() && q.front()<i){
                 q.pop();
               }
               if(q.size()%2==nums[i]){
                  if(i+k-1>=n)
                     return -1;
                  q.push(i+k-1);
                  flip++;
               } 
        }
     return flip;   
}
int main(){
        vector<int>nums={0,0,0,1,0,1,1,0};
        int k=3;
        cout<<minKBitFlips(nums,k);

return 0 ;
}