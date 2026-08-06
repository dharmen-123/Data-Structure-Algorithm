
    
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

        /* // Q.2169. Count Operations to Obtain Zero // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int counter(int num1, int num2, int count){
//         if(num1==0 || num2==0){
//                 return count;
//         }
//         if(num1>=num2){
//                return counter(num1-=num2,num2,count+1);
//         }
//         else{
//                return counter(num1,num2-=num1,count+1);
//         }
// }
// int countOperations(int num1, int num2) {
//         return counter(num1,num2,0);
//     }
// int main(){
//         int num1=2, num2=3;
//         cout<<countOperations(num1,num2);

// return 0 ;
// }

        /* // Q.2032. Two Out of Three  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
//         unordered_map<int,int>freq;
//         unordered_set<int>S1(nums1.begin(),nums1.end());
//         unordered_set<int>S2(nums2.begin(),nums2.end());
//         unordered_set<int>S3(nums3.begin(),nums3.end());
//         for(auto k:S1){
//                 freq[k]++;
//         }
//         for(auto k:S2){
//                 freq[k]++;
//         }
//         for(auto k:S3){
//                 freq[k]++;
//         }
//         nums1.clear();
//         for(auto it=freq.begin();it!=freq.end();it++){
//              if(it->second>=2){
//                  nums1.push_back(it->first);
//                 }
//         }
//         return nums1;
// }
// int main(){
//         vector<int>nums1={3,1};
//         vector<int>nums2={2,3};
//         vector<int>nums3={1,2};
//         vector<int>result=twoOutOfThree(nums1,nums2,nums3);
//         for(auto a:result){
//                 cout<<a<<" ";
//         }

// return 0 ;
// }

                /* // Q.1732. Find the Highest Altitude  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int largestAltitude(vector<int>& gain) {
//         long long sum=0;
//         int altitude=0;
//         for(int i=0;i<gain.size();i++){
//                 sum=sum+gain[i];
//                 if(sum>altitude){
//                    altitude=sum;
//                 }
//         }
//         return altitude;
//     }
// int main(){
//         vector<int>gain={-5,1,5,0,-7};
//         // vector<int>gain={-4,-3,-2,-1,4,3,2};
//         cout<<largestAltitude(gain);

// return 0 ;
// }

                /* // Q.136. Single Number // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int singleNumber(vector<int>& nums) {
//         int s=0,e=nums.size()-1;
//         int result=0;
//         while(s<=e){
//              result=result^nums[s];
//              s++;
//           if((s-1)!=e){
//              result=result^nums[e];
//              e--;   
//             }
//         }
//         return result;
// }
// int main(){
//         // vector<int>nums={2,2,1};
//         vector<int>nums={4,1,2,1,2};
//         cout<<singleNumber(nums);

// return 0 ;
// }

                /* // Q.136. Single Number // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int singleNumber(vector<int>& nums) {
//         int result=0;
//         for(int i=0;i<nums.size();i++){
//                 result^=nums[i];
//         }
//         return result;
//     }
// int main(){
//           vector<int>nums={2,2,3,2};
//         // vector<int>nums={0,1,0,1,0,1,99};
//         cout<<singleNumber(nums);


// return 0 ;
// }

                /* //  Q.1189. Maximum Number of Balloon   // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxNumberOfBalloons(string text) {
//         unordered_map<char,int>bal{{'b',0},
//                                    {'a',0},
//                                    {'l',0},
//                                    {'o',0},
//                                    {'n',0}};
//         for(auto c:text){
//            if(bal.find(c)!=bal.end()){
//                 bal[c]++;
//            }
//         }
//         int b=bal['b']/1;
//         int a=bal['a']/1;
//         int l=bal['l']/2;
//         int o=bal['o']/2;
//         int n=bal['n']/1;

//         return min({b,a,l,o,n});
//     }
// int main(){
//         // string text = "nlaebolko";
//         string text = "loonbalxballpoon";
//         cout<<maxNumberOfBalloons(text);

// return 0 ;
// }

                /*    // Q.509. Fibonacci Number // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n) {
//         // if(n<=1){
//         //     return n;    
//         // }
//         // return fib(n-1)+fib(n-2);
//         if(n==0) return 0;
//         if(n==1) return 1;
//         int first=0,second=1,num;
//         for(int i=2;i<=n;i++){
//             num=first+second;
//             first=second;
//             second=num;
//         }
//         return num;
//     }
// int main(){
//         int n=3;
//         cout<<fib(n);

// return 0 ;
// }

              /* // 1678. Goal Parser Interpretation  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string interpret(string command) {
//         int n=command.size();
//         int index=0;
//         for(int i=0;i<n;i++){
//             if(isalpha(command[i])){
//                 command[index++]=command[i];
//             }
//             else if(command[i]=='(' && command[i+1]==')'){
//                 command[index++]='o';
//                 i++;
//             }
//         }
//         command.erase(index);
//         return command;
//     }
// int main(){
//         // string command = "G()()()()(al)";
//         string command = "(al)G(al)()()G";
//         cout<<interpret(command);

// return 0 ;
// }

                /* // Q.125. Valid Palindrome // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isPalindrome(string s) {
//         if(s.size()<=1){
//            return true;
//         }
//         int index=0;
//         for(int i=0;i<s.size();i++){
//           if(isalnum(s[i])){
//               s[index++]=tolower(s[i]);
//            }
//         }
//         s.erase(index);
//         string a=s;
//         reverse(s.begin(),s.end());
//         return a==s;
//     }
// int main(){
//         string s="A man, a plan, a canal: Panama";
//         cout<<isPalindrome(s);

// return 0 ;
// }

        /* // Q.1967. Number of Strings That Appear as Substrings in Word // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int numOfStrings(vector<string>& patterns, string word) {
//         int count=0;
//         for(auto k:patterns){
//             if(word.find(k)<word.size()){
//                 count++;
//             }
//         }
//         return count;
//     }
// int main(){
//         vector<string>patterns={"a","a","a"};
//         string word="ab";
//         cout<<numOfStrings(patterns,word);

// return 0 ;
// }

        /* // Q.28. Find the Index of the First Occurrence in a String // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int strStr(string haystack, string needle) {
//         int pos=haystack.find(needle);
//         if(pos>haystack.size()){
//              pos=-1;   
//         }
//         return pos;
//     }
// int main(){
//         string haystack = "sadbutsad", needle = "sad";
//         // string haystack = "leetcode", needle = "leeto";
//         cout<<strStr(haystack,needle);

// return 0 ;
// }

        /* // Q.338. Counting Bits // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> countBits(int n) {
//         vector<int>ans(n+1,0);
//        for(int i=1;i<=n;i++){
//            ans[i]=ans[i>>1]+(i&1);
//        }
//         return ans;
//     }
// int main(){
//         int n=5;
//         vector<int>result=countBits(n);
//         for(auto k:result){
//                 cout<<k<<" ";
//         }
// return 0 ;
// }

        /* // Q.1768. Merge Strings Alternately // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string mergeAlternately(string word1, string word2) {
//         int n1=word1.size(),n2=word2.size();
//         string ans;
//         for(int i=0;i<n1 || i<n2;i++){
//             if(i<n1)    
//                 ans+=word1[i];
//             if(i<n2)    
//                 ans+=word2[i];
//         }
//         return ans;
//     }
// int main(){
//         string word1="abc",word2="pqr";
//         // string word1="ab",word2="pqrs";
//         cout<<mergeAlternately(word1,word2);

// return 0 ;
// }

        /* // Q.1431. Kids With the Greatest Number of Candies // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//         int n=candies.size();
//         int large=INT_MIN;
//         vector<bool>ans(n,false);
//         for(auto k:candies){
//             large=max(large,k);
//         }
//         for(int i=0;i<n;i++){
//                 if((candies[i]+extraCandies)>=large){
//                         ans[i]=true;
//                 }
//         }
//         cout<<large<<endl;
//     return ans;
//     }
// int main(){
//         // vector<int>candies = {2,3,5,1,3};
//         vector<int>candies = {12,1,12};
//         int extraCandies = 1;
//         vector<bool>result=kidsWithCandies(candies,extraCandies);
//         for(auto k:result){
//                 cout<<k<<" ";
//         }
// return 0 ;
// }

        /* // Q.724. Find Pivot Index // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int pivotIndex(vector<int>& nums) {
//        int totalSum = 0;
//        for (int n : nums) 
//             totalSum += n;
//        int leftSum = 0;
//        for (int i = 0; i < nums.size(); i++) {
//            if (leftSum == totalSum - leftSum - nums[i]) {
//                return i;
//            }
//         leftSum += nums[i];
//         }
//      return -1;
//     }
// int main(){
//         vector<int>nums = {1,7,3,6,5,6};
//         // vector<int>nums = {1,2,3};
//         cout<<pivotIndex(nums);

// return 0 ;
// }

                /* // Q.392. Is Subsequence // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isSubsequence(string s, string t) {
//         int index=0;
//         if(s.size()==0){
//             return true;
//         }
//         bool check=false;
//         for(int i=0;i<t.size();i++){
//                if(t[i]==s[index]){
//                    check=true;
//                    index++;
//                    if(index>s.size()-1){
//                         return check;
//                    }
//                }
//                else{
//                 check=false;
//                }
//         }
//         return index==s.size();
// }
// int main(){
//         string s = "abc", t = "ahbgdc";
//         // string s = "acb",t = "ahbgdc";
//         cout<<isSubsequence(s,t);

// return 0 ;
// }

                /* // Q.605. Can Place Flowers // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//         int size=flowerbed.size();
//         if(n==0) return true;           // if no plots
//         if(size == 1) {                 // for single plot
//             return (flowerbed[0] == 0 && n <= 1);
//         }
//         if(flowerbed[0]==0 && flowerbed[1]==0){         //for staring plots
//                 flowerbed[0]=1;
//                 n--;
//                 if(n==0) return true;

//         }
//         for(int i=1;i<size-1;i++){              //for middle plots
//                 if(n>0 && flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
//                         flowerbed[i]=1;
//                         n--;
//                 }
//                 if(n==0) return true;
//         }
//         if(flowerbed[size-1] == 0 && flowerbed[size-2] == 0) {          // for last plots
//              flowerbed[size-1] = 1;
//              n--;
//             if(n == 0) return true;
//        }
//        return n <= 0;
//     }
// int main(){
//         // vector<int>flowerbed = {1,0,0,0,1};
//         // vector<int>flowerbed = {0,0,1};
//         vector<int>flowerbed = {0,0};
//         int n = 2;
//         cout<<canPlaceFlowers(flowerbed,n);

// return 0 ;
// }

        /* // Q.Q1. Unique Middle Element // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isMiddleElementUnique(vector<int>& nums) {
//         int n=nums.size();
//         int mid=nums[n/2],count=0;
//         for(int i=0;i<n;i++){
//            if(nums[i]==mid){
//                 count++;
//            }
//         }
//         if(count>1){
//                 return false;
//         }
//         return true;
//     }
// int main(){
//         vector<int>nums={1,2,2};
//         cout<<isMiddleElementUnique(nums);

// return 0 ;
// }

                /* // Q.3982 Sum of Integers with Maximum Digit Range  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxDigitRange(vector<int>& nums) {
//         vector<int>digit;
//         for(int i=0;i<nums.size();i++){
//            int n=nums[i];
//            string s=to_string(n);
//            int maxv=s[0]-'0';
//            int minv=s[0]-'0';
//            int j=0;
//                 while(j<s.size()){
//                    maxv=max(maxv,s[j]-'0'); 
//                    minv=min(minv,s[j]-'0'); 
//                    j++;
//                 }
//               digit.push_back(maxv-minv);
//         }
//         int maxim=digit[0];
//         for(int i=0;i<digit.size();i++){
//                 maxim=max(maxim,digit[i]);
//         }
//         int sum=0;
//         for(int i=0;i<digit.size();i++){
//                 if(digit[i]==maxim){
//                         sum+=nums[i];
//                 }
//         }
//         return sum;   
// }

// int main(){
//         vector<int>nums={5724,111,350};
//         cout<<maxDigitRange(nums);
// return 0 ;
// }

        /* // Q.643. Maximum Average Subarray I  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// double findMaxAverage(vector<int>& nums, int k) {
//         int count=0, index=0;
//         double maxavg=INT_MIN, sum=0;
//         for(int i=0;i<nums.size();i++){
//                 count++;
//                 sum+=nums[i];
//                 if(count==k){
//                    maxavg=max(maxavg,sum/k);
//                    sum-=nums[index++];
//                    count--;
//                 }
//         }
//         return maxavg;
// }
// int main(){
//         vector<int>nums = {1,12,-5,-6,50,3};
//         int k = 4;
//         // vector<int>nums = {-3,-5,-2,-8};
//         // int k = 2;
//         // vector<int>nums = {5};
//         // int k = 1;
//         cout<<findMaxAverage(nums,k);

// return 0 ;
// }

        /* // Q.394. Decode String // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string decodeString(string s) {
        
//     }
// int main(){
//         string s="3[a]2[bc]";
//         cout<<decodeString(s);
        
// return 0 ;
// }

        /* // Q..3986 Number of Elapsed Seconds Between Two Times // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int secondsBetweenTimes(string startTime, string endTime) {
//         int hr=0,minu=0,sec=0, startsum=0 , endsum=0;

//         hr=(startTime[0]-'0')*10+(startTime[1]-'0');
//         minu=(startTime[3]-'0')*10+(startTime[4]-'0');
//         sec=(startTime[6]-'0')*10+(startTime[7]-'0');
//         startsum=(hr*3600)+(minu*60)+sec;
        
//         hr=0,minu=0,sec=0;
//         hr=(endTime[0]-'0')*10+(endTime[1]-'0');
//         minu=(endTime[3]-'0')*10+(endTime[4]-'0');
//         sec=(endTime[6]-'0')*10+(endTime[7]-'0');
//         endsum=(hr*3600)+(minu*60)+sec;
        
//         return endsum-startsum;
//     }
// int main(){
//         // string startTime = "01:00:00", endTime = "01:00:25";
//         string  startTime = "12:34:56", endTime = "13:00:00";
//         cout<<secondsBetweenTimes(startTime,endTime);

// return 0 ;
// }

        /* // Q.1331. Rank Transform of an Array  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> arrayRankTransform(vector<int>& arr) {
//         vector<int> temp = arr;
//         sort(temp.begin(), temp.end());
//         unordered_map<int, int>rank;
//         int r = 1;
//         for (int x : temp){
//             if (rank.find(x) == rank.end()){
//                 rank[x] = r++;
//             }
//         }
//         for (int i = 0; i < arr.size(); i++) {
//             arr[i] = rank[arr[i]];
//         }
//         return arr;
// }
// int main(){
//         vector<int>arr = {40,10,20,30};
//         // vector<int>arr = {100,100,100};
//         vector<int>result=arrayRankTransform(arr);
//         for(auto k:result){
//                 cout<<k<<" ";
//         }

// return 0 ;
// }

                /* // Q.349. Intersection of Two Arrays   //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int>ans;
//         unordered_set<int>s1(nums1.begin(),nums1.end());
//         for(auto k:nums2){
//               if(s1.count(k)){
//                 ans.push_back(k);
//                 s1.erase(k);
//               }  
//         }        
//         return ans;
// }
// int main(){
//         // vector<int>nums1={1,2,2,1},nums2={2,2};
//         vector<int>nums1 = {4,9,5}, nums2 = {9,4,9,8,4};
//         vector<int>result=intersection(nums1,nums2);
//         for(auto k:result){
//              cout<<k<<" ";   
//         }

// return 0 ;
// }

        /* // Q.1979. Find Greatest Common Divisor of Array  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int findGCD(vector<int>& nums) {
//         int minval=INT_MAX,maxval=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//               minval=min(minval,nums[i]);  
//               maxval=max(maxval,nums[i]);  
//         }
//         int gcd=0;
//         for(int i=1;i<=minval;i++){
//              if(minval%i==0 && maxval%i==0){
//                  gcd=max(gcd,i);
//              }   
//         }
//         return gcd;
//     }
// int main(){
//         vector<int>nums={2,5,6,9,10};
//         // vector<int>nums={7,5,6,8,3};
//         // vector<int>nums={3,3};
//         cout<<findGCD(nums);

// return 0 ;
// }



/* ********************************************************* */
        /*      LINKED LIST      */
/* ********************************************************* */

        /* // Q.876. Middle of the Linked List // */

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

// ListNode* middleNode(ListNode* Head) {
//          int length=0;
//          ListNode *temp=Head;
//          while(temp!=NULL){
//                 length++;
//                 temp=temp->next;
//          }
//          int midindex=length/2;
//          temp=Head;
//          for(int i=0;i<midindex;i++){
//              temp=temp->next;
//          }

//         return temp;
//     }
// int main(){
//         ListNode *Head=new ListNode(1);
//         ListNode *n2=new ListNode(2);
//         ListNode *n3=new ListNode(3);
//         ListNode *n4=new ListNode(4);
//         ListNode *n5=new ListNode(5);
//         ListNode *n6=new ListNode(6);
//         Head->next=n2;
//         n2->next=n3;
//         n3->next=n4;
//         n4->next=n5;
//         n5->next=n6;

//         ListNode *mid=middleNode(Head);

//         /* Print the linked List */
//         ListNode *temp=mid;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }

        /* // Q.206. Reverse Linked List  //  */

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
// ListNode* reverseList(ListNode* Head) {
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

//         ListNode *start=reverseList(Head);

//         /* Print the linked List */
//         ListNode *temp=start;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }

                /* // Q.234. Palindrome Linked List // */

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
// bool isPalindrome(ListNode* head) {
//         if(head->next==NULL){
//              return true;
//         }
//         int count=0;
//         ListNode *temp=head;
//         // count the length of list
//         while(temp!=NULL){
//                 count++;
//                 temp=temp->next;
//         }
//         count=count/2;
//         ListNode *curr=head;
//         ListNode *prev=NULL;
//         // find the mid of list
//         while(count--){
//              prev=curr;
//              curr=curr->next;   
//         }
//         //break the list into two halfs
//         prev->next=NULL;
//         temp=curr;
//         prev=NULL;
//         // Reverse the second half list
//         while(temp->next!=NULL){
//              temp=curr->next;
//              curr->next=prev;
//              prev=curr;
//              curr=temp;   
//         }
//        curr->next=prev;
//        // check the both list is equal or not
//        while(head!=NULL){
//            if(head->val!=curr->val){
//                 return false;
//            }
//            head=head->next;
//            curr=curr->next;
//        } 
//     return true;
//     }

// int main(){
//         ListNode *Head=new ListNode(1);
//         ListNode *n2=new ListNode(2);
//         ListNode *n3=new ListNode(2);
//         ListNode *n4=new ListNode(1);
//         Head->next=n2;
//         n2->next=n3;
//         n3->next=n4;

//         cout<<"It is Pallindrome - "<<isPalindrome(Head)<<endl;

//         /* Print the linked List */
//         ListNode *temp=Head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }

                /* // Q.21. Merge Two Sorted Lists // */

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
// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(list1==NULL && list2==NULL)
//                 return NULL;
//         if(list1!=NULL && list2==NULL)
//               return list1;
//         else if(list1==NULL && list2!=NULL)
//               return list2;
//         ListNode dummy(0);
//         ListNode* Tail=&dummy; 
//         while(list1 != nullptr && list2 != nullptr) {
//              if(list1->val <= list2->val) {
//                  Tail->next = list1;
//                  list1 = list1->next;
//              } else {
//                  Tail->next = list2;
//                  list2 = list2->next;
//              }
//            Tail = Tail->next;
//         }
//         if(list1 != nullptr) 
//                 Tail->next = list1;
//         else 
//                 Tail->next = list2;

//       return dummy.next;
//     }
// int main(){
//         ListNode *Head1=new ListNode(1);
//         ListNode *n2=new ListNode(2);
//         ListNode *n3=new ListNode(4);
//         Head1->next=n2;
//         n2->next=n3;
        
//         ListNode *Head2=new ListNode(1);
//         ListNode *h2=new ListNode(3);
//         ListNode *h3=new ListNode(4);
//         Head2->next=h2;
//         h2->next=h3;

//         Head1=mergeTwoLists(Head1,Head2);

//         /* Print the linked List */
//         ListNode *temp=Head1;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }

                /* // Q.83. Remove Duplicates from Sorted List  // */


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
//         ListNode* curr=head;
//         while(curr!=NULL && curr->next!=NULL){
//              if(curr->val==curr->next->val){
//                 ListNode *dup=curr->next;
//                 curr->next=curr->next->next;
//                 delete dup;        
//              }
//              else{
//                  curr=curr->next;
//                 }   
//         }

//      return head;
// }

// int main(){
//         ListNode *Head=new ListNode(1);
//         ListNode *n2=new ListNode(1);
//         ListNode *n3=new ListNode(2);
//         ListNode *n4=new ListNode(3);
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

                /* // Q.141. Linked List Cycle  // */

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
// bool hasCycle(ListNode *head) {
//         ListNode* slow=head;        
//         ListNode* fast=head;
//         while(fast!=NULL && fast->next!=NULL){
//               slow=slow->next;
//               fast=fast->next->next;
//               if(slow==fast){
//                 return true;
//               }  
//         }        
//         return false;
// }

// int main(){
//         ListNode *Head=new ListNode(3);
//         ListNode *n2=new ListNode(2);
//         ListNode *n3=new ListNode(0);
//         ListNode *n4=new ListNode(-4);
//         Head->next=n2;
//         n2->next=n3;
//         n3->next=n4;
//         n4->next=n2;  //Cycle from node 4 to 2

//         cout<<hasCycle(Head);

//         /* Print the linked List */
//         // ListNode *temp=Head;
//         // while(temp!=NULL){
//         //     cout<<temp->val<<" ";
//         //     temp=temp->next;
//         // }
// return 0 ;
// }

                /* // Q.1260. Shift 2D Grid  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
//         int m=grid[0].size(), n=grid.size();
//         while(k--){
//         int value=grid[0][0];
//         int pre;
//         for(int i=1;i<m*n;i++){
//                 int rowi=i/m;   
//                 int coli=i%m;
//                 pre=grid[rowi][coli];
//                 grid[rowi][coli]=value;
//                 value=pre;
//         }
//           grid[0][0]=value;
//         }
//         return grid;
// }
// int main(){
//         // vector<vector<int>>grid={{1,2,3},{4,5,6},{7,8,9}};
//         // int k=2;
//         vector<vector<int>>grid={{3,8,1,9},{19,7,2,5},{4,6,11,10},{12,0,21,13}};
//         int k=4;
//         vector<vector<int>>ans=shiftGrid(grid,k);
//         for(auto k:ans){
//                 for(auto a:k){
//                         cout<<a<<" ";
//                 }
//         }
// return 0 ;
// }

        /* // Q.844. Backspace String Compare // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool backspaceCompare(string s, string t) {
//         stack<char>st;
//         for(int i=0;i<s.size();i++){
//                if(s[i]=='#'){
//                   if(!st.empty())
//                     st.pop();    
//                }
//                else{
//                    st.push(s[i]);     
//                } 
//         }
//         s.clear();
//         while(!st.empty()){
//              s+=st.top();
//              st.pop();   
//         }
//         for(int i=0;i<t.size();i++){
//                if(t[i]=='#'){
//                   if(!st.empty())
//                      st.pop();    
//                }
//                else{
//                    st.push(t[i]);     
//                } 
//         }
//         t.clear();
//         while(!st.empty()){
//              t+=st.top();
//              st.pop();   
//         }
//         reverse(s.begin(),s.end());
//         reverse(t.begin(),t.end());
//         if(s==t){
//                 return true;
//         }
//         return false;
// }
// int main(){
//         // string s = "ab#c", t = "ad#c";
//         string s = "y#fo##f",t= "y#f#o##f";
//         cout<<backspaceCompare(s,t);

// return 0 ;
// }

        /* // Q.350. Intersection of Two Arrays II  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
//         unordered_map<int,int>freq;
//         for(auto x:nums2){
//             freq[x]++;
//         }
//         vector<int>ans;
//         for(auto k:nums1){
//               if(freq[k]>0){
//                 ans.push_back(k);
//                 freq[k]--;
//               }
//         }
//    return ans; 
// }
// int main(){
//         vector<int>nums1 = {1,2,2,1}, nums2 = {2,2};
//         // vector<int>nums1 = {4,9,5}, nums2 = {9,4,9,8,4};
//         vector<int>ans=intersect(nums1,nums2);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }
// return 0 ;
// }

                /* // Q.1122. Relative Sort Array // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//          unordered_map<int,int>freq;
//          vector<int>ans(arr1.size(),0);
//          for(auto a:arr1){
//                 freq[a]++;
//          }
//          int j=0;
//          for(int i=0;i<arr2.size();i++){
//                 while(freq[arr2[i]]--){
//                       ans[j++]=arr2[i];
//                 }
//                 freq.erase(arr2[i]);
//          }
//          int index=j;
//          for(auto it=freq.begin();it!=freq.end();it++){
//                  while(it->second--){
//                          ans[j++]=it->first;  
//                         }
//                 }
//         sort(ans.begin()+index,ans.end());
//         return ans;
//     }
// int main(){
//         // vector<int>arr1 = {2,3,1,3,2,4,6,7,9,2,19}, arr2 = {2,1,4,3,9,6};
//         vector<int>arr1 = {28,6,22,8,44,17}, arr2 = {22,28,8,6};
//         vector<int>ans=relativeSortArray(arr1,arr2);
//         for(auto a:ans){
//                 cout<<a<<" ";
//         }
// return 0 ;
// }

                /* // Q.1394. Find Lucky Integer in an Array // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int findLucky(vector<int>& arr) {
//        unordered_map<int,int>freq;
//        for(auto a:arr){
//          freq[a]++;
//        } 
//        int lucky=0;
//        for(auto i=freq.begin();i!=freq.end();i++){
//              if(i->first==i->second){
//                 lucky=max(lucky,i->first);
//              }   
//        }
//        return lucky!=0 ? lucky : -1;
// }
// int main(){
//         // vector<int>arr = {2,2,3,4};
//         vector<int>arr = {2,2,2,3,3};
//         cout<<findLucky(arr);

// return 0 ;
// }


                /* // Q.228. Summary Ranges // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<string> summaryRanges(vector<int>& nums) {
//         vector<string>ans;
//         int n=nums.size();        
//         for(int i=0;i<n;i++){
//             int start=nums[i];
//             while(i+1<n && nums[i]+1==nums[i+1])        
//                 i++;
            
//             if(start==nums[i]){
//                 ans.push_back(to_string(start));
//             }
//             else{
//                 ans.push_back(to_string(start) + "->" + to_string(nums[i]));
//             }    
//         }
//         return ans;
//     }
// int main(){
//         // vector<int>nums = {0,1,2,4,5,7};
//         vector<int>nums = {0,2,3,4,6,8,9};
//         vector<string>ans=summaryRanges(nums);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }
// return 0 ;
// }

                /* // Q.2243. Calculate Digit Sum of a String //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string digitSum(string s, int k) {
//         string s1;
//         int sum=0;
//         while(s.size()>k){
//             int count=0;    
//             for(int i=0;i<s.size();i++){
//                 count++;
//                 sum+=(s[i]-'0'); 
//                 if(count==k || i==s.size()-1){
//                     s1+=to_string(sum);
//                     count=0;
//                     sum=0;    
//                 }
//             }
//             s=s1;        
//             s1.clear();
//         }
//     return s;
// }
// int main(){
//         string s = "11111222223";
//         // string s = "00000000";
//         int k = 3;
//         cout<<digitSum(s,k);

// return 0 ;
// }


        /* // Q.160. Intersection of Two Linked Lists // */

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
// ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
//         int l1=0,  l2=0;
//         ListNode* curr=head1;
//         while(curr && curr->next){
//                 l1+=1;
//                 curr=curr->next;
//         }
//         curr=head2;
//         while(curr && curr->next){
//                 l2+=1;
//                 curr=curr->next;
//         }
//         ListNode* curr1=head1;
//         ListNode* curr2=head2;
//         int count;
//         if(l1>l2){
//             count=l1-l2;
//             while(count--){
//                 curr1=curr1->next;
//             }    
//         }
//         else{
//             count=l2-l1;
//             while(count--){
//                 curr2=curr2->next;
//             }
//         }
//         while(curr1!=curr2){
//               curr1=curr1->next;  
//               curr2=curr2->next;  
//         }
//         return curr2;   
//     }
// int main(){
//         ListNode *Head1=new ListNode(1);
//         ListNode *n2=new ListNode(9);
//         ListNode *n3=new ListNode(1);
//         ListNode *n4=new ListNode(2);
//         ListNode *n5=new ListNode(4);
//         Head1->next=n2;
//         n2->next=n3;
//         n3->next=n4;
//         n4->next=n5;

//         ListNode *Head2=new ListNode(3);
//         Head2->next=n4;

//         Head1=getIntersectionNode(Head1,Head2);
//         /* Print the linked List */
//         ListNode *temp=Head1;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }


// return 0 ;
// }

                /* // Q.3536. Maximum Product of Two Digits // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxProduct(int n) {
//         string s=to_string(n);
//         sort(s.begin(),s.end(),greater<char>());
//         int ans=(s[0]-'0')*(s[1]-'0');        
//      return ans;
//         }
// int main(){
//         int n=124;
//         cout<<maxProduct(n);

// return 0 ;
// }


                /* // Q.2733. Neither Minimum nor Maximum // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int findNonMinOrMax(vector<int>& nums) {
//         int minval=INT_MAX,maxval=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             maxval=max(maxval,nums[i]);
//             minval=min(minval,nums[i]);
//         }
//         for(int i=0;i<nums.size();i++){
//               if(nums[i]!=maxval && nums[i]!=minval){
//                  return nums[i];
//               }  
//         }
//         return  -1;
//     }
// int main(){
//         // vector<int>nums={3,2,1,4};
//         vector<int>nums={2,1,3};
//         cout<<findNonMinOrMax(nums);

// return 0 ;
// }

        /* // Q.628. Maximum Product of Three Numbers // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maximumProduct(vector<int>& nums) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
// }
// int main(){
//         // vector<int>nums={1,2,3};
//         vector<int>nums={1,2,3,4};
//         // vector<int>nums={-100,-98,-1,2,3,4};
//         cout<<maximumProduct(nums);

// return 0 ;
// }

                /* // Q.1464. Maximum Product of Two Elements in an Array // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxProduct(vector<int>& nums) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         return (nums[n-1]-1)*(nums[n-2]-1);
// }
// int main(){
//         vector<int>nums={1,5,4,5};
//         // vector<int>nums={3,7};
//         cout<<maxProduct(nums);

// return 0 ;
// }

                /* // Q.2108. Find First Palindromic String in the Array // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string firstPalindrome(vector<string>& words) {
//         for(auto s:words){
//              int left=0;
//              int right=s.size()-1;
//              bool pallindrome=true;
//              while(left<right){
//              if(s[left]!=s[right]){
//                    pallindrome=false;
//                    break;
//                 }   
//                 left++;
//                 right--; 
//              }
//              if(pallindrome){
//                   return s; 
//             }
//         }
//        return "";         
// }
// int main(){
//         vector<string>words = {"abc","car","ada","racecar","cool"};
//         // vector<string>words = {"notapalindrome","racecar"};
//         cout<<firstPalindrome(words);

// return 0 ;
// }


        /* // Q.263. Ugly Number  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isUgly(int n) {
//         if(n<=0)
//             return false;
//         while(n%2==0){
//               n/=2;  
//         } 
//         while(n%3==0){
//               n/=3;  
//         } 
//         while(n%5==0){
//               n/=5;  
//         } 
//         return n==1;
// }
// int main(){
//         int n=14;
//         cout<<isUgly(n);

// return 0 ;
// }


                /* // Q.434. Number of Segments in a String  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int countSegments(string s) {
//         int count=0;
//         for(int i=0;i<s.size();i++){
//                 if(s[i]!=' ' && (i==0 || s[i-1]==' ')){
//                         count++;
//                 }
//         }
//         return count;
// }
// int main(){
//         string s = "Hello, my name is John";
//         // string s = "Hello";
//         cout<<countSegments(s);

// return 0 ;
// }

                /* // Q.507. Perfect Number // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool checkPerfectNumber(int num) {
//         if(num<=0){
//                 return false;
//         }
//         int sum=0;
//         for(int i=1;i<=num/2;i++){
//                if(num%i==0){
//                    sum+=i;     
//                } 
//         }
//         return num==sum;
//     }
// int main(){
//         int num=1;
//         cout<<checkPerfectNumber(num);

// return 0 ;
// }

                /* // Q.680. Valid Palindrome II // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool validPalindrome(string s) {

        
// }
// int main(){
//         string s = "abca";
//         cout<<validPalindrome(s);

// return 0 ;
// }
        

        /* // Q.3014. Minimum Number of Pushes to Type Word I // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int minimumPushes(string word) {
//         int ans=0;
//         for(int i=0;i<word.size();i++){
//                 ans+=(i/8)+1;
//         }
//         return ans;
//     }
// int main(){
//         // string word="abcde";
//         string word="xycdefghij";
//         cout<<minimumPushes(word);

// return 0 ;
// }

                /* // Q.219. Contains Duplicate II // */
        
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<int, int> mp;
//         for (int i = 0; i < nums.size(); i++) {
//             if (mp.find(nums[i]) != mp.end()) {
//                 if (i - mp[nums[i]] <= k)
//                     return true;
//             }
//             mp[nums[i]] = i;
//         }

//         return false;
// }
// int main(){
//         // vector<int>nums={1,0,1,1};
//         vector<int>nums={1,2,3,1,2,3};
//         int k=2;
//         cout<<containsNearbyDuplicate(nums,k);

// return 0 ;
// }

                /* // Q.682. Baseball Game  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int calPoints(vector<string>& operations) {
//         stack<int>st;
//         for(int i=0;i<operations.size();i++){
//               if(operations[i]=="C" && !st.empty()){
//                       st.pop();  
//               }
//               else if(operations[i]=="D" && st.size()>=1){
//                  st.push(st.top()*2);
//               }
//               else if(operations[i]=="+" && st.size()>=2){
//                    int first=st.top();
//                    st.pop();
//                    int second=st.top();
//                    int sum=first+second;
//                    st.push(first);
//                    st.push(sum);                      
//               }  
//               else{
//                 int value=stoi(operations[i]);
//                   st.push(value);      
//               }
//         }
//         if(st.empty()){
//                return 0; 
//         }
//         int ans=0;
//         while(!st.empty()){
//             ans+=st.top();
//             st.pop();    
//         }
//         return ans;
//     }
// int main(){
//         vector<string>ops = {"5","2","C","D","+"};
//         // vector<string>ops = {"5","-2","4","C","D","9","+","+"};
//         // vector<string>ops = {"1","C"};
//         cout<<calPoints(ops);
// return 0 ;
// }

                /* // Q.4006  Maximize Pair Strength Using GCD  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// long long gcd(long long a, long long b) {
//     while (b != 0) {
//         long long temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }
// long long maxPairStrength(vector<int>& nums) {
//     int n = nums.size();
//     long long ans = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             long long a = nums[i];
//             long long b = nums[j];
//             long long g = gcd(a, b);
//             long long strength = (a * b) / (g * g);
//             ans = max(ans, strength);
//         }
//     }
//     return ans;
// }

// int main(){
//         vector<int>nums={2,3,5};
//         cout<<maxPairStrength(nums);

// return 0 ;
// }

                /* // Q.697. Degree of an Array  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int findShortestSubArray(vector<int>& nums) {
//     unordered_map<int,int> freq;
//     unordered_map<int,int> first;
//     unordered_map<int,int> last;
//     int degree = 0;
//     for(int i = 0; i < nums.size(); i++) {
//         freq[nums[i]]++;
//         if(first.find(nums[i]) == first.end()) {
//             first[nums[i]] = i;
//         }
//         last[nums[i]] = i;
//         degree = max(degree, freq[nums[i]]);
//     }
//     int ans = nums.size();
//     for(auto x : freq) {
//         if(x.second == degree) {
//             ans = min(ans, last[x.first] - first[x.first] + 1);
//         }
//     }
//     return ans;
// }
// int main(){
//         vector<int>nums={1,2,2,3,1};
//         cout<<findShortestSubArray(nums);

// return 0 ;
// }

                /* // Q.2073. Time Needed to Buy Tickets  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int timeRequiredToBuy(vector<int>& tickets, int k) {
//         queue<int>q;
//         for(int i=0;i<tickets.size();i++){
//                 q.push(i);
//         }
//         int time=0;
//         while(tickets[k]!=0){
//             tickets[q.front()]--;
//             if(tickets[q.front()]){
//                 q.push(q.front());
//             }
//             q.pop();
//             time++;
//         }
//         return time;
// }
// int main(){
//         vector<int>tickets={2,3,2};
//         int k=2;
//         cout<<timeRequiredToBuy(tickets,k);
        
// return 0 ;
// }

        /* // Q.232. Implement Queue using Stacks // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class MyQueue {
//     stack<int>s1;
//     stack<int>s2;
//     public:
//     MyQueue() {
         
//     } 
//     void push(int x) {
//         s1.push(x);
//     }
//     int pop() {
//         if(!s2.empty()){
//               int element=s2.top();
//               s2.pop();
//               return element;  
//         }
//         else{
//                while(!s1.empty()){
//                   s2.push(s1.top());
//                   s1.pop();
//                }
//               int element=s2.top();
//               s2.pop();
//               return element;  
//         }
//     }
//     int peek() {
//         if(empty()){
//              return 0;   
//         }
//         if(!s2.empty()){
//              return s2.top();
//         }
//         else{
//                while(!s1.empty()){
//                  s2.push(s1.top());
//                  s1.pop();
//                }
//               return s2.top();
//         }
//     }
//     bool empty() {
//         return s1.empty() && s2.empty();   
//     }
// };

// int main(){
//         MyQueue q;
//         q.push(4);
//         q.push(5);
//         q.push(7);
//         cout<<q.pop()<<endl;
//         q.push(9);
//         cout<<q.peek()<<endl;
//         cout<<q.empty()<<endl;

// return 0 ;
// }

        /* // Q.3345. Smallest Divisible Digit Product I  // */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int smallestNumber(int n, int t) {
     while (true) {
        int temp = n;
        int product = 1;
        while (temp > 0) {
            product *= (temp % 10);
            temp /= 10;
        }
        if (product % t == 0)
            return n;
        n++;
    }
}
int main(){
       int n=15,t=3;
       cout<<smallestNumber(n,t); 

return 0 ;
}