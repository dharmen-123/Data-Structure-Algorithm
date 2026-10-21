
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

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int minKBitFlips(vector<int>& nums, int k) {
//         queue<int>q;
//         int flip=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//                if(!q.empty() && q.front()<i){
//                  q.pop();
//                }
//                if(q.size()%2==nums[i]){
//                   if(i+k-1>=n)
//                      return -1;
//                   q.push(i+k-1);
//                   flip++;
//                } 
//         }
//      return flip;   
// }
// int main(){
//         vector<int>nums={0,0,0,1,0,1,1,0};
//         int k=3;
//         cout<<minKBitFlips(nums,k);

// return 0 ;
// }

        /* // Q.2267. Check if There Is a Valid Parentheses String Path // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int m, n;
//     bool dfs(int i, int j, int balance,
//              vector<vector<char>>& grid,
//              vector<vector<vector<int>>>& dp) {
//         if (grid[i][j] == '(')
//             balance++;
//         else
//             balance--;

//         if (balance < 0)
//             return false;
//         int remain = (m - 1 - i) + (n - 1 - j);
//         if (balance > remain + 1)
//             return false;
//         if (i == m - 1 && j == n - 1)
//             return balance == 0;
//         if (dp[i][j][balance] != -1)
//             return dp[i][j][balance];
//         bool ans = false;
//         if (i + 1 < m)
//             ans |= dfs(i + 1, j, balance, grid, dp);
//         if (j + 1 < n)
//             ans |= dfs(i, j + 1, balance, grid, dp);

//         return dp[i][j][balance] = ans;
//     }

//     bool hasValidPath(vector<vector<char>>& grid) {
//         m = grid.size();
//         n = grid[0].size();
//         if (grid[0][0] == ')')
//             return false;
//         if (grid[m - 1][n - 1] == '(')
//             return false;
//         int len = m + n - 1;
//         if (len % 2 == 1)
//             return false;
//         vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(205, -1))
//         );

//         return dfs(0, 0, 0, grid, dp);
// }
// int main(){
//         vector<vector<char>>grid ={{'(','(','('},{')','(',')'},{'(','(',')'},{'(','(',')'}};
//         cout<<hasValidPath(grid);

// return 0 ;
// }


        /* // Q.32. Longest Valid Parentheses //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int longestValidParentheses(string s) {
//         stack<int>st;
//         st.push(-1);
//         int ans=0;
//         for(int i=0;i<s.size();i++){
//                 if(s[i]=='('){
//                     st.push(i);
//                 }
//                 else{
//                         st.pop();
//                         if(st.empty()){
//                                 st.push(i);
//                         }
//                         else{
//                                 ans=max(ans,i-st.top());
//                         }
//                 }
//         }
//       return ans;  
// }
// int main(){
//         // string s="(()";
//         string s=")()())";
//         // string s="";
//         cout<<longestValidParentheses(s);

// return 0 ;
// }

        /* // Q.2897. Apply Operations on Array to Maximize Sum of Squares //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxSum(vector<int>& nums, int k) {
//         long long mod = 1000000007;
//         vector<int> bits(31, 0);

//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = 0; j < 31; j++) {
//                 if (nums[i] & (1 << j)) {
//                     bits[j]++;
//                 }
//             }
//         }
//         long long ans = 0;
//         for (int i = 0; i < k; i++) {
//             long long num = 0;
//             for (int j = 0; j < 31; j++) {
//                 if (bits[j] > 0) {
//                     num |= (1LL << j);
//                     bits[j]--;
//                 }
//             }

//             ans = (ans + num * num) % mod;
//         }
//         return ans;
// }
// int main(){
//         vector<int>nums = {2,6,5,8};
//         int k = 2;
//         cout<<maxSum(nums,k);
        
// return 0 ;
// }


        /* // Q.2916. Subarrays Distinct Element Sum of Squares II  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// static constexpr long long MOD = 1e9 + 7;
//     struct SegTree {
//         vector<long long> sum, sq, lazy;
//         SegTree(int n) {
//             sum.resize(4 * n);
//             sq.resize(4 * n);
//             lazy.resize(4 * n);
//         }

//         void apply(int p, int l, int r, long long val) {
//             sq[p] = (sq[p]
//                     + 2LL * val % MOD * sum[p] % MOD
//                     + (r - l + 1) * val % MOD * val % MOD) % MOD;

//             sum[p] = (sum[p]
//                     + (r - l + 1) * val) % MOD;

//             lazy[p] = (lazy[p] + val) % MOD;
//         }

//         void push(int p, int l, int r) {
//             if (!lazy[p]) return;

//             int m = (l + r) >> 1;

//             apply(p << 1, l, m, lazy[p]);
//             apply(p << 1 | 1, m + 1, r, lazy[p]);

//             lazy[p] = 0;
//         }
//         void update(int p, int l, int r,
//                     int ql, int qr) {

//             if (qr < l || r < ql)
//                 return;

//             if (ql <= l && r <= qr) {
//                 apply(p, l, r, 1);
//                 return;
//             }

//             push(p, l, r);

//             int m = (l + r) >> 1;
//             update(p << 1, l, m, ql, qr);
//             update(p << 1 | 1, m + 1, r, ql, qr);

//             sum[p] =(sum[p << 1] + sum[p << 1 | 1]) % MOD;
//             sq[p] =(sq[p << 1] + sq[p << 1 | 1]) % MOD;
//         }

//         long long query() {
//             return sq[1];
//         }
//     };

//     int sumCounts(vector<int>& nums) {
//         int n = nums.size();
//         SegTree seg(n);
//         unordered_map<int, int> last;
//         long long ans = 0;

//         for (int i = 0; i < n; i++) {
//             int prev = -1;

//             if (last.count(nums[i]))
//                 prev = last[nums[i]];
//             seg.update(1,0,n - 1,prev + 1,  i);
//             ans = (ans + seg.query()) % MOD;
//             last[nums[i]] = i;
//         }
//         return (int)ans;
// }
// int main(){
//         // vector<int>nums={1,2,1};
//         vector<int>nums={2,2};
//         cout<<sumCounts(nums);

// return 0 ;
// }


    /* // Q.3886. Sum of Sortable Integers  // */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isRotation(vector<int>& nums, vector<int>& sortedNums,int start, int k) {
        vector<int> pattern;
        for (int i = start; i < start + k; i++) {
            pattern.push_back(sortedNums[i]);
        }
        vector<int> lps(k, 0);
        int j = 0;
        for (int i = 1; i < k; i++) {
            while (j > 0 && pattern[i] != pattern[j]) {
                j = lps[j - 1];
            }
            if (pattern[i] == pattern[j]) {
                j++;
            }
            lps[i] = j;
        }
        j = 0;
        for (int i = 0; i < 2 * k - 1; i++) {
            int value = nums[start + (i % k)];
            while (j > 0 && value != pattern[j]) {
                j = lps[j - 1];
            }
            if (value == pattern[j]) {
                j++;
            }
            if (j == k) {
                return true;
            }
        }
        return false;
    }
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());
        int ans = 0;
        for (int k = 1; k <= n; k++) {
            if (n % k != 0) {
                continue;
            }
            bool valid = true;
            for (int i = 0; i < n; i += k) {
                if (!isRotation(nums, sortedNums, i, k)) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                ans += k;
            }
        }
        return ans;
    }
int main(){
        vector<int>nums={3,1,2};
        cout<<sortableIntegers(nums);


return 0 ;
}