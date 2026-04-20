
    // //  ****** BUBBLE SORT ****** // // 

// Bubble Sort is a comparison-based sorting algorithm.
// It repeatedly compares adjacent elements and swaps them if they are in the wrong order. This process continues until the array is sorted.

    // ****** Key Idea:

// Larger elements “bubble up” to the end of the array after each pass.
// After the first pass, the largest element is at the last position.
// After the second pass, the second largest is at the second last position, and so on.

// **** Working Steps ***** //

// Compare the first two elements.
// Swap if they are in the wrong order.
// Move to the next pair and repeat.
// After one full pass, the largest element is at the end.
// Repeat for the remaining unsorted portion until all elements are sorted.

#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n){
     
    for(int i=0;i<n-1;i++){
        bool check=true;
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                check=false;
            }
        }
        if(check==true){
            break;
        }
    }
}

int main(){
        int arr[1000];
        int n;
        cout<<"Enter the size of array: ";
        cin>>n;
        cout<<"Enter the array elements: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];    
        }
        BubbleSort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";    
        }

return 0 ;
}