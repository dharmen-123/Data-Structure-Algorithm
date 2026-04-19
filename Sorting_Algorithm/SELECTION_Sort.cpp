
    // //  ****** SELECTION SORT ****** // // 

// Selection Sort is a comparison-based sorting algorithm.
// It works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the array and placing it at the correct position in the sorted portion.

// Key Idea:
// Divide the array into two parts: sorted and unsorted.
// Repeatedly pick the minimum element from the unsorted part and move it to the sorted part.

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