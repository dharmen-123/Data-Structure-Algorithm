
    // // ********  BINARY SEARCH ALGORITHM  ******** // //
/*
 Binary Search is a divide-and-conquer searching algorithm.
It works only on sorted arrays/lists. The idea is to repeatedly divide the search interval in half until the target element is found or the interval becomes empty.
*/
// Key Idea:

// Compare the target with the middle element.
// If equal → found.
// If smaller → search left half.
// If larger → search right half.

// Working Steps

// Start with the entire sorted array.
// Find the middle element.
// If target equals middle → return index.
// If target < middle → search left half.
// If target > middle → search right half.
// Repeat until found or interval is empty.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = low + (high - low)/2;  
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;  
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 30;

    int result = binarySearch(arr, n, target);
    if(result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";
    return 0;
}
