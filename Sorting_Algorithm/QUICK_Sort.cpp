
            /*  // ******  QUICK SORT ****** //  */

/*
QuickSort is a fast, in‑place sorting algorithm that works by choosing a pivot, 
partitioning the array around it, and recursively sorting the subarrays. 
It runs in average O(n log n) time, but can degrade to O(n²) if the pivot choice is poor.
In practice, it is often faster than Merge Sort because it avoids extra memory usage
*/

/*
****Key Points of QuickSort****

* Divide and Conquer:
Divide: Pick a pivot element.
Partition: Rearrange elements so that all smaller values are on the left of the pivot and larger values are on the right.
Conquer: Recursively apply QuickSort to left and right subarrays.
Combine: Nothing to do — the array is sorted once recursion finishes.

* Pivot Selection:
Last element (simple, but worst case for sorted arrays).
Random element (reduces chance of worst case).
Median element (ideal split, but costly to compute).

* Partition Schemes:
Lomuto Partition: Simple, uses one index to track smaller elements.
Hoare Partition: Faster, uses two pointers moving inward.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){


return 0 ;
}


/*
*** Complexity Analysis ***
* Best Case: O(n log n) when the pivot splits the array evenly.
* Average Case: O(n log n) with randomized or balanced pivot selection.
* Worst Case: O(n²) if the pivot is always the smallest or largest element.
* Space Complexity: O(log n) on average due to recursion stack; O(n) in worst case.
* In-Place: QuickSort sorts the array in place, so no extra O(n) memory is needed.
* Stability: QuickSort is not stable (equal elements may change order).
*/

/*
*** Advantages: ***
Works in place (no extra O(n) memory like Merge Sort).
Very fast in practice due to cache efficiency.
Widely used in libraries (with randomized pivot).

*** Drawbacks: ***
Not stable (equal elements may change relative order).
Worst case O(n²) if pivot choice is bad.
*/