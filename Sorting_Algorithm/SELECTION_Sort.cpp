
    // //  ****** SELECTION SORT ****** // // 

// Selection Sort is a comparison-based sorting algorithm.
// It works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the array and placing it at the correct position in the sorted portion.

// Key Idea:
// Divide the array into two parts: sorted and unsorted.
// Repeatedly pick the minimum element from the unsorted part and move it to the sorted part.

// Working Steps

// ** Start with the first element.
// ** Find the smallest element in the unsorted array.
// ** Swap it with the first element.
// ** Move the boundary of the sorted part one step forward.
// ** Repeat until the entire array is sorted.


#include<iostream>
using namespace std;
void Selection(int arr[], int n){
    for(int i=0;i<n-1;i++){
      int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Selection(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0 ;
}

// Complexity Analysis

// Best Case: O(n²) (still compares all pairs)
// Worst Case: O(n²)
// Average Case: O(n²)
// Space Complexity: O(1) (in-place sorting)
// Stability: Not stable (equal elements may change order)