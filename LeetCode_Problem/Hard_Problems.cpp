
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

            /* // Q.3614. Process String with Special Operations II // */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char processStr(string s, long long k) {
        string result;
        for(int i=0;i<s.size();i++){
             if(s[i]>=97 && s[i]<=122){
                result+=s[i];
             }
             else if(s[i]=='*'){
                if(result.size())
                    result.erase(result.size()-1,1);
             }
             else if(s[i]=='#'){
                if(result.size()){
                    result+=result[result.size()-1];
                }
             }
             else{
                if(result.size())
                    reverse(result.begin(),result.end());
             }
        }
        cout<<result<<endl;
        if(result.size()>k){
            return result[k];
        }
        return '.';
    }
int main(){
    //   string s="a#b%*";
      string s="cd%#*#";
      int k=3;
    //   string s="#k#";
      cout<<processStr(s,k);

return 0 ;
}