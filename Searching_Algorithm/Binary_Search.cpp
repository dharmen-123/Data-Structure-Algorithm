
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