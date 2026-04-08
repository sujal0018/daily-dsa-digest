# Largest Element in Array

**Question Link:**  
https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

---

## Problem Statement
Given an array `arr[]`, the task is to find and return the largest element.

---

## Examples

### Example 1
**Input:**  
`arr[] = [1, 8, 7, 56, 90]`  
**Output:**  
`90`  
**Explanation:** The largest element of the given array is 90.

---

### Example 2
**Input:**  
`arr[] = [5, 5, 5, 5]`  
**Output:**  
`5`  
**Explanation:** The largest element of the given array is 5.

---

### Example 3
**Input:**  
`arr[] = [10]`  
**Output:**  
`10`  
**Explanation:** There is only one element which is the largest.

---

## Constraints
- `1 <= arr.size() <= 10^6`
- `0 <= arr[i] <= 10^6`

---

## Approach

### Brute Force
- Sort the array and return the last element.
- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(1)`

---

### Optimal Approach
- Traverse the array using linear search.
- Keep track of the maximum element.
- Update the maximum whenever a larger element is found.
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Mistake
- Initially compared each element with the **previous element**, which led to incorrect results.
- Correct approach is to compare with the **current maximum element**.

---

## Code

```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        int elem = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > elem) 
                elem = arr[i];
        }
        return elem;
    }
};