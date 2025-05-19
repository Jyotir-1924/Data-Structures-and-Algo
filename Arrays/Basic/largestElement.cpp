// class Solution
// {
// public:
//     int largest(vector<int> &arr)
//     {
//         int n = arr.size();
//         if (n == 1)
//             return arr[0];
//         int maxElement = INT_MIN;
//         for (int i = 0; i < n; i++)
//             if (arr[i] > maxElement)
//                 maxElement = arr[i];
//         return maxElement;
//     }
// };

// Purpose:
//     To find and return the largest element in a given array.

// How It Works:
//     Edge Case Check:
//         If the array has only one element, return that element.

// Initialization:
//     Set maxElement to the smallest possible integer value (INT_MIN).

// Loop Through the Array:
//     Iterate through each element, and update maxElement whenever a larger value is found.

// Return the Result:
//     After the loop, maxElement holds the largest value in the array.

// Time Complexity: O(n)
//     Traverses the array once to find the maximum.

// Space Complexity: O(1)
//     Uses only a single variable to store the maximum.