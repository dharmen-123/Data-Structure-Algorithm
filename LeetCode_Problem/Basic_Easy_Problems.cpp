
    
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

// #include<iostream>
// #include<vector>
// using namespace std;
// int maxProfit(vector<int>& prices) {
//         int buy = INT16_MAX;
//         int profit = 0;
//         for(int i=0; i<prices.size(); i++) {
//             if(prices[i] < buy) {
//                 buy = prices[i];
//             }
//             profit = max(profit, prices[i] - buy);
//         }
//         return profit;
//     }
// int main(){
//         vector<int>prices={2,4,1};
//         cout<<maxProfit(prices);

// return 0 ;
// }

////////////////////////////////////////////////////////////////////////////
    /*   // STRINGS QUESTIONS //   */
///////////////////////////////////////////////////////////////////////////

    /* // Q.1108. Defanging an IP Address // */

// #include<iostream>
// using namespace std;
// string defangIPaddr(string address) {
//         int index=0;
//         string ans="";
//         while(index<address.size()){
//             if(address[index]!='.'){
//                 ans=ans+address[index];
//             }
//             else{
//                 ans=ans+'['+address[index]+']';
//             }
//             index++;
//         }
//         return ans;
//     }
// int main(){
//     string address="255.100.50.0";
//     cout<<defangIPaddr(address);

// return 0 ;
// }

            /* // Q.1832. Check if the Sentence Is Pangram // */

// #include<iostream>
// #include<vector>
// using namespace std;
// bool checkIfPangram(string sentence) {
//         vector<bool>arr(26,0);
//         int n=sentence.size();
//         for(int i=0;i<n;i++){
//                 arr[sentence[i]-97]=1;
//         }
//         for(int i=0;i<26;i++){
//             if(arr[i]==0){
//                 return false;
//             }
//         }     
//       return true;
//     }
// int main(){
//         string sentence="thequickbrownfoxjumpsoverthelazydog";
//         // string sentence="leetcode";
//         cout<<checkIfPangram(sentence);

// return 0 ;
// }

        /*  // Q.409. Longest Palindrome  // */

// #include<iostream>
// #include<vector>
// using namespace std;
// int longestPalindrome(string s) {
//         int n=s.size() ,count=0;
//         vector<int>arr(52,0);
//         for(int i=0;i<n;i++){
//             if(s[i]>='a'){
//                arr[s[i]-'a']++;
//             }
//             else{
//                 arr[s[i]-39]++;
//             }
//         }
//         int odd=0;
//         for(int i=0;i<52;i++){
//             if(arr[i]%2==0){
//                 count+=arr[i];
//             }
//             else{
//                 count+=(arr[i]-1);
//                 odd=1;
//             }
//         }

//     return count+odd;
//     }
// int main(){
//     // string s="abccccdd";
//     string s="aaaabbbacccc";
//     cout<<longestPalindrome(s);
// return 0 ;
// }

        /* //  Q.1859. Sorting the Sentence  //  */

// #include<iostream>
// #include<vector>
// using namespace std;
// string sortSentence(string s) {
//         vector<string>sentence(10);
//         int n=s.size(),count=0;
//         string temp="";
//         for(int i=0;i<n;i++){
//             if(s[i]!=' '){
//                 temp+=s[i];
//                 if(i==n-1){
//                    int pos=temp[temp.size()-1]-'0';
//                    temp.pop_back();
//                    sentence[pos]=temp;  
//                    temp.clear();
//                    count++;

//                 }
//             }
//             else{
//                 int pos=temp[temp.size()-1]-'0';
//                 temp.pop_back();
//                 sentence[pos]=temp;
//                 temp.clear();
//                 count++;
//             }
//         } 
//         for(int i=1;i<=count;i++){
//             temp+=sentence[i];
//             temp+=' ';
//         }
//          temp.pop_back();
//      return temp;
//     }
// int main(){
//         // string s="is2 sentence4 This1 a3";
//         string s = "Myself2 Me1 I4 and3";
//         cout<<sortSentence(s);

// return 0 ;
// }

            /* // Q.415. Add Strings // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// string add(string num1, string num2) {
//         string ans;
//         int index1=num1.size()-1, index2=num2.size()-1;
//         int sum, carry=0;
//         //index>=0
//         while(index2>=0){
//             sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
//             carry=sum/10;
//             char c='0'+sum%10;
//             ans+=c;
//             index2-- , index1--;
//         }
//         //index1>=0
//         while(index1>=0){
//             sum=(num1[index1]-'0')+carry;
//             carry=sum/10;
//             char c='0'+sum%10;
//             ans+=c;
//             index1--;
//         }
//         if(carry){
//             ans+='1';
//         }
//         reverse(ans.begin(),ans.end());
    
//     return ans;

//     }
//     string addStrings(string num1, string num2) {
//         if(num1.size()>num2.size())
//             return add(num1,num2);
//         else
//             return add(num2,num1);

//     }
// int main(){
//     // string num1 = "11", num2 = "123";
//     string num1 = "456", num2 = "77";
//     cout<<addStrings(num1,num2);

// return 0 ;
// }

        /*  // Q.2540. Minimum Common Value   // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int getCommon(vector<int>& nums1, vector<int>& nums2) {
//         int first=0 , second =0;
//         while(first<nums1.size() && second<nums2.size()){
//             if(nums1[first]==nums2[second]){
//                 return nums1[first];
//             }
//             else if(nums1[first]<nums2[second]){
//                 first++;
//             }
//             else{
//                 second++;
//             }
//         }
//         return -1;
//     }
// int main(){
//     vector<int>nums1={1,2,3};
//     vector<int>nums2={2,4};
//     cout<<getCommon(nums1,nums2);

// return 0 ;
// }

        /* // Q.3300. Minimum Element After Replacement With Digit Sum  // */

// #include<iostream>
// #include<vector>
// using namespace std;
// int minElement(vector<int>& nums) {
//     string s="";
//     for(int i=0;i<nums.size();i++){
//         s+=to_string(nums[i]);
//         int sum=0;
//         for(auto k:s){
//             sum+=k-'0';
//         }
//         nums[i]=sum;
//         s.clear();
//     }
//     int minval=nums[0];
//     for(auto k:nums){
//         minval=min(k,minval);
//     }
//     return minval;
//     }
// int main(){
//     vector<int>nums={999,19,199};
//     cout<<minElement(nums);

// return 0 ;
// }

        /*  // Q.14. Longest Common Prefix  //  */

// #include<iostream>
// #include<vector>
// using namespace std;
// string longestCommonPrefix(vector<string>& strs) {
//       string s=strs[0];
//       string s1="";
//       for(int i=0;i<strs.size();i++){
//           int n=strs[i].size();   
//           int j=0,k=0;          
//           while(j<n && j<s.size()){
//                 k++;
//               if(s[j]==strs[i][j]){
//                  if(k-j==1){
//                      s1+=s[j];
//                   }
//                   else{
//                       break;
//                   }
//               }   
//               else{
//                 k--;
//               }
//               j++;
//             }
//             s.clear();
//             s=s1;
//             s1.clear();
//       }
//       return s;
//     }
// int main(){
//         // vector<string>strs={"flower","flow","flight"};
//         // vector<string>strs={"dog","racecar","car"};
//         vector<string>strs={"cir","car"};
//         cout<<longestCommonPrefix(strs);
//         cout<<endl<<"Common";

// return 0 ;
// }


                /* // Q.3945. Digit Frequency Score  //  */

// #include<iostream>
// #include<vector>
// using namespace std;
// int digitFrequencyScore(int n) {
//         int sum=0;
//         while(n>0){
//             int last=n%10;
//             sum+=last;
//             n=n/10;    
//         }
//         return sum;
//     }
// int main(){
//         int n=101;
//         cout<<digitFrequencyScore(n);
// return 0 ;
// }

                /* // Q.1051. Height Checker  //  */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int heightChecker(vector<int>& heights) {
//       vector<int>h=heights;
//       sort(heights.begin(),heights.end());
//       int index=0;
//       for(int i=0;i<heights.size();i++){
//                 if(heights[i]!=h[i]){
//                         index++;
//                 }
//       }   
//       return index;
//     }
// int main(){
//         // vector<int>heights={1,1,4,2,1,3};
//         vector<int>heights={1,2,3,4,5};
//         cout<<heightChecker(heights);
// return 0 ;
// }

                /* // Q.3731. Find Missing Elements  //  */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> findMissingElements(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>ans;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n-1;i++){
//            int j=nums[i+1]-nums[i];
//            int k=1;
//              while(j>1){
//                 ans.push_back(nums[i]+k);
//                 j--,k++;
//              }
//         }

//         return ans;
//     }
// int main(){
//         // vector<int>nums={1,4,2,5};
//         vector<int>nums={7,8,6,9};
//         vector<int>result=findMissingElements(nums);
//         for(auto k:result){
//                 cout<<k<<" ";
//         }

// return 0 ;
// }

                /* // Q.2810. Faulty Keyboard  //  */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// string finalString(string s) {
//         int n=s.size();
//         string str;
//         for(int i=0;i<n;i++){
//           if(s[i]!='i'){
//                 str+=s[i];
//           }
//           else{
//             reverse(str.begin(),str.end());
//           }
//         }
//         return str;
//     }
// int main(){
//         string s="string";
//         // string s="poiinter";
//         cout<<finalString(s);   //rtsng

// return 0 ;
// }

                /* // Q.345. Reverse Vowels of a String  //  */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// string reverseVowels(string s) {
//         int n=s.size();
//         string vowel;
//         for(int i=0;i<n;i++){
//               if(s[i]== 'A' || s[i]== 'E' || s[i]== 'I' || s[i]== 'O' || s[i]== 'U' ||
//                 s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u'){
//                         vowel+=s[i];
//                         s[i]='\0';
//                 }
//         }
//         reverse(vowel.begin(),vowel.end());
//         int first=0, second=0;
//         while(first<n){
//                 if(s[first]=='\0'){
//                      s[first]=vowel[second];
//                      second++;   
//                 }
//           first++;
//         }
//         return s;
//     }
// int main(){
//         // string s="IceCreAm";
//         string s="leetcode";
//         cout<<reverseVowels(s);

// return 0 ;
// }

                /* // Q.389. Find the difference  //  */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// char findTheDifference(string s, string t) {
//         vector<int>alpha(26,0);
//         char a;
//         int n=t.size();
//         for(int i=0;i<n;i++){
//            alpha[t[i]-'a']+=1;   
//         }
//         for(int i=0;i<n-1;i++){
//            alpha[s[i]-'a']-=1;   
//         }
//         for(int i=0;i<26;i++){
//            if(alpha[i]!=0){
//                a=char(i+'a');
//            };   
//         }
//     return a;
//     }
// int main(){
//    string s="abcd" , t="abcde";
// //    string s="" , t="y";
//    cout<<findTheDifference(s,t);

// return 0 ;
// }

                /* // Q.2652. Sum Multiples  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int sumOfMultiples(int n) {
//         int sum=0;
//         for(int i=1;i<=n;i++){
//             if(i%3==0 || i%5==0 || i%7==0){
//                 sum+=i;
//             }
//         }
//         return sum;
//     }
// int main(){
//         int n=9;
//         cout<<sumOfMultiples(n);

// return 0 ;
// }

                /* // Q.541. Reverse String II  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string reverseStr(string s, int k) {
//         int n=s.size();
//         int start =0 ,count=0;
//         if(k>=n){
//             reverse(s.begin(),s.end());
//         }
//         for(int i=1;i<=n;i++){
//              count+=1;   
//            if(count==k || i==n ){
//                reverse(s.begin()+start,s.begin()+i);
//                count=0;
//                i+=k;
//                start=i;
//            }
//         }
//      return s;
//     }
// int main(){
//      string s="abcdefg";
//      int k=39;
//      cout<<reverseStr(s,k);     //bacdfeg

// return 0 ;
// }

                /* // Q.917. Reverse Only Letters  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string reverseOnlyLetters(string s) {
//         int start=0,end=s.size()-1;
//         while(start<end){
//                 if(!isalpha(s[start])){
//                     start++;
//                     continue;
//                 }
//                 if(!isalpha(s[end])){
//                     end--;
//                     continue;
//                 }
//                 swap(s[start],s[end]);
//                 start++ , end--;
//         }
//         return s;
//     }
// int main(){
//         // string s="ab-cd";
//         string s="a-bC-dEf-ghIj";
//         cout<<reverseOnlyLetters(s);    //j-Ih-gfE-dCba

// return 0 ;
// }

                /* // Q.557. Reverse Words in a String III  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string reverseWords(string s) {
//         int n=s.size();
//         int start=0, end=0;
//         for(int i=1;i<=n;i++){
//            if(s[i]==' ' || i==n){
//                 end=i-1;
//                 while(start<=end){
//                     swap(s[start],s[end]);
//                     start++,end--;
//                 }
//                 start=i+1;
//            }
//         }
//         return s; 
//     }
// int main(){
//         string s = "Let's take LeetCode contest";
//         cout<<reverseWords(s);  //s'teL ekat edoCteeL tsetnoc

// return 0 ;
// }


                /* // Q.2574. Left and Right Sum Differences  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> leftRightDifference(vector<int>& nums){
//         int n=nums.size();
//         vector<int>leftsum={0};
//         vector<int>rightsum={0};
//         for(int i=0;i<n-1;i++){
//                 leftsum.push_back(leftsum[i]+nums[i]);
//         }
//         int j=0;
//         for(int i=n-1;i>0;i--){
//                 rightsum.push_back(rightsum[j++]+nums[i]);
//         }
//         reverse(rightsum.begin(),rightsum.end());
//         for(int i=0;i<n;i++){
//             nums[i]=abs(leftsum[i]-rightsum[i]);
//         }
//         return nums;
//     }
// int main(){
//         vector<int>nums={10,4,8,3};
//         vector<int>ans=leftRightDifference(nums);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }
// return 0 ;
// }

                /* // Q.2000. Reverse Prefix of Word  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string reversePrefix(string word, char ch) {
//         int n=word.size(),end=0;
//         for(int i=0;i<n;i++){
//             if(word[i]==ch){
//                 end=i+1;
//                 break;
//             }
//         }
//         reverse(word.begin(),word.begin()+end);
//         return word;
//     }
// int main(){
//         string word="abcdefd";
//         char ch='d';
//         cout<<reversePrefix(word,ch);

// return 0 ;
// }
    
                /* // Q.1816. truncate Sentence  //  */
              
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string truncateSentence(string s, int k) {
//         int n=s.size();
//         int count=0;
//         for(int i=1;i<=n;i++){
//                 if(s[i]==' ' || i==n){
//                    count++;
                   
//                 }
//                 if(count==k){
//                     s.erase(i,n-i);
//                        return s; 
//                 }
//         }
//        return s; 
// }
// int main(){
//         // string s="Hello how are you Contestant";
//         string s="What is the solution to this problem";
//         int k=4;
//         cout<<truncateSentence(s,k);

// return 0 ;
// }

                /* // Q.709. To Lower Case  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string toLowerCase(string s) {
//         for(int i=0;i<s.size();i++){
//                 if(s[i]>=65 && s[i]<=90){
//                        s[i]=s[i]+32; 
//                 }
//         }
//         return s;
//     }
// int main(){
//         string s = "Hello";
//         string s = "LOVELY";
//         cout<<toLowerCase(s);

// return 0 ;
// }

                /* // Q.728. Self Dividing Numbers  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> selfDividingNumbers(int left, int right) {
//         vector<int>result;
//         int ans;
//         for(int i=left;i<=right;i++){
//              ans=i;
//              bool check=false;
//                 while(i>0){
//                    int rem=i%10;
//                    if(ans%rem==0){
//                         check=true;
//                    }
//                    else{
//                         check=false;
//                    }
//                    i=i/10;
//              }
//              if(check){
//                  result.push_back(ans);
//              }
//         }
//     }
// int main(){


// return 0 ;
// }

                /* // Q.1748. Sum of Unique Elements  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int sumOfUnique(vector<int>& nums) {
//         unordered_map<int , int>uniq;
//         int sum=0;
//         for(int i=0;i<nums.size();i++){
//            uniq[nums[i]]++;
//         }
//         for(auto i=uniq.begin();i!=uniq.end();i++){
//                 if(i->second==1){
//                     sum+=i->first;    
//                 }
//         }
//         return sum;
//     }
// int main(){
//         vector<int>nums={1,2,3,2};
//         // vector<int>nums={1,1,1,1,1};
//         cout<<sumOfUnique(nums);

// return 0 ;
// }

                /* // Q.1351. Count Negative Numbers in a Sorted Matrix  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int countNegatives(vector<vector<int>>& grid) {
//         int count=0, n=grid.size(),m=grid[0].size();
//         int j=0;
//         int i=0;
//         while(i<n){
//                if(grid[i][j]<0){
//                 count++;
//                } 
//                j++;
//                if(j==m){
//                         j=0;
//                         i++;
//                 }
//         }
//         return count;
//     }
// int main(){
//         // vector<vector<int >>grid={{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
//         vector<vector<int >>grid={{3,2},{1,0}};
//         cout<<countNegatives(grid);
// return 0 ;
// }

        /* // Q.1342. Number of Steps to Reduce a Number to Zero // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int operation(int num , int count){
//         if(num==0){
//                 return count;
//         }
//         if(num%2==0){
//                 return operation(num/2,count+1);
//         }
//         else{
//                 return operation(num-1,count+1);
//         }
// }
// int numberOfSteps(int num) {
//         // int count=0;
//         // while(num>0){
//         //      if(num%2!=0){
//         //         num-=1;
//         //         count++;
//         //      }
//         //      else{
//         //          num=num/2;
//         //          count++;
//         //      }
//         //  }
//         // return count;
//         return operation(num,0);
//     }
// int main(){
//         int n=123;
//         cout<<numberOfSteps(n);

// return 0 ;
// }

