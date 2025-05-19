// class Solution {
//   public:
//     vector<int> getAlternates(vector<int> &arr) {
//         vector<int> ans;
//         for(int i=0;i<arr.size();i+=2)
//             ans.push_back(arr[i]);
//         return ans;
//     }
// };

// Purpose:
//     To return a new array containing alternate elements (i.e., elements at even indices) from the input array.

// How It Works:
//     Initialize an empty result vector:
//         ans will store the alternate elements.

// Iterate through the array with a step of 2:
//     Start from index 0.
//     Increment index by 2 each time to get every alternate element (i.e., 0, 2, 4, ...).

// Add the element to result:
//     Use push_back to insert the current element into ans.
//     Return the result vector ans.

// Example:
//     For input: [1, 2, 3, 4, 5]
//     Output: [1, 3, 5]

// Time Complexity: O(n/2) ≈ O(n)
//     Traverses half the array, which is still linear in terms of input size.

// Space Complexity: O(n/2)
//     Stores half of the input array in a new vector.