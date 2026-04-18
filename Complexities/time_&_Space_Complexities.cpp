// Time Complexity represents how the execution time increases as the input size (n) increases.

// 👉 It does NOT measure actual time (seconds)
// 👉 It measures growth rate of operations

// Space Complexity represents how much extra memory an algorithm uses as input size grows.

// 👉 Includes:

// Variables
// Data structures
// Recursion stack

// Types of Time Complexity (Big-O Notation)

// Big-O describes worst-case scenario

// 🔶 1. Constant Time → O(1)

// 👉 Execution time does NOT depend on input size

// int x = arr[0];

// ✔ Always 1 operation

// 🔶 2. Linear Time → O(n)

// 👉 Time increases linearly

// for(int i = 0; i < n; i++)
//     cout << arr[i];

// ✔ If n doubles → time doubles

// 🔶 3. Quadratic Time → O(n²)

// 👉 Nested loops

// for(int i = 0; i < n; i++)
//     for(int j = 0; j < n; j++)
//         cout << i << j;

// ✔ If n=10 → 100 ops, n=100 → 10,000 ops

// 🔶 4. Logarithmic Time → O(log n)

// 👉 Input reduces by half each step

// while(n > 1){
//     n = n / 2;
// }

// ✔ Used in Binary Search

// 🔶 5. Linearithmic → O(n log n)

// 👉 Combination of linear + log

// ✔ Example: Merge Sort

// 🔶 6. Exponential → O(2ⁿ)

// 👉 Doubles each step

// f(n) = f(n-1) + f(n-2);

// ✔ Very slow (used in naive recursion)

// 🔷 5. Order of Growth (Best to Worst)
// O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ)