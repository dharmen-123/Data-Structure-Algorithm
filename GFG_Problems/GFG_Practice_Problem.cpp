
 // // Q. Allocation minimumn Number of Pages    //

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findPages(vector<int> &arr, int K) {
        int N=arr.size();
        if(K>N)
         return -1;
        int start=0,end=0,mid, ans;
        for(int i=0;i<N;i++){
                start=max(start,arr[i]);
                end+=arr[i];
        }
        while(start<=end){
           mid=(start+end)/2;
           int pages=0, count=1;
           for(int i=0;i<N;i++){
                pages+=arr[i];
                if(pages>mid){
                     count++;
                     pages=arr[i];
                }
           }
           if(count<=K){
                ans=mid;
                end=mid-1;
           }
           else{
                start=mid+1;
           }
        }
        return ans;
    }
int main(){
        vector<int>arr={12,34,67,90};
        int m=2;
        cout<<findPages(arr,m);

return 0 ;
}