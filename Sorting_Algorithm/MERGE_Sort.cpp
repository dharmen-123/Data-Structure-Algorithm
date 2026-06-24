
            /*  // ******  MERGE SORT ****** //  */
/*
Merge Sort is a divide-and-conquer sorting algorithm.
It works by recursively splitting the array into halves, sorting each half, and then merging them back together in sorted order.

Key idea: Divide → Sort → Merge.

    ** Working Steps **

* Divide the array into two halves.
* Recursively sort each half.
* Merge the two sorted halves into one sorted array.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>& arr, int low, int high , int mid){
    vector<int>temp(high+1);
    int i=low;
    int j=mid+1;
    int index=low;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp[index]=arr[i];
            i++;
        }
        else{
            temp[index]=arr[j];
            j++;
        }
        index++;
    }
    while(i<=mid){
        temp[index]=arr[i];
        i++,index++;
    }
    while(j<=high){
        temp[index]=arr[j];
        j++,index++;
    }
    while(low<=high){
        arr[low]=temp[low];
        low++;
    }
    return arr;
}
vector<int> mergesort(vector<int>&arr, int left , int right){
     if(left<right){
        int mid=left+(right-left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,right , mid);
     }
     return arr;
}
int main(){
    vector<int>arr={5,2,7,6,1,4,8,3,9};
    int n=arr.size();
    vector<int>result=mergesort(arr,0,n-1);
    cout << "Sorted array: ";
    for(int x : result) 
       cout << x << " ";
return 0 ;
}



/*
***** Complexity Analysis ******

* Best Case: O(n log n)
* Worst Case: O(n log n)
* Average Case: O(n log n)
* Space Complexity: O(n) (extra space for merging)
* Stable: Yes (preserves order of equal elements).
*/