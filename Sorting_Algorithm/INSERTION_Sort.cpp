
    // ****** INSERTION SORT ****** //

/*
Insertion Sort is a comparison-based, stable sorting algorithm.
It works like sorting playing cards in your hand: pick one card at a time and insert it into its correct position among the already sorted cards.
*/

// // Key Idea:

// Divide the array into sorted and unsorted parts.
// Take one element from the unsorted part and insert it into the correct position in the sorted part.
// Repeat until all elements are sorted.

// ** Working Steps ** //

// Start with the second element (first element is trivially sorted).
// Compare it with elements in the sorted part.
// Shift larger elements one position to the right.
// Insert the current element into its correct position.
// Repeat for all elements.

#include<iostream>
using namespace std;
void Insertion(int arr[], int n){
        
        for(int i=0;i<n-1;i++){
            int min=i+1;
            int j=i;
            while(j>=0 && arr[min]<arr[j]){
                    swap(arr[min],arr[j]);
                    min--;
                    j--;
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
        Insertion(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";    
        }

return 0 ;
}

// ** Complexity Analysis ** /

// Best Case: O(n) (already sorted, only one comparison per element).
// Worst Case: O(n²) (reverse order, maximum shifts).
// Average Case: O(n²).
// Space Complexity: O(1) (in-place sorting).
// Stability: Yes (equal elements retain order).
// Adaptability: Performs better if data is partially sorted.

// hello python
// coding
// oos.flush();
// oos.close();