
    
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

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& arr, int target){
        int start=0 ,end=arr.size()-1,ans=arr.size(), mid;
        while(start<=end){
            if(arr[mid]==target){
                ans=mid;   
                return mid;
            }
            else if(arr[mid]<target){
                    start=mid+1;

            }
            else{
                    ans=mid;
                    end = mid-1;
            }
        }



}
int main(){
        vector<int>arr={1,3,5,6};
        int target=2;
        searchInsert(arr,target);
        for(auto x:arr){
            cout<<x<<" ";
        }

return 0 ;
}