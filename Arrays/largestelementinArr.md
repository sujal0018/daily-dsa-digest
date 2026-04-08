# Largest Element in Array

Question link -> https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

Given an array arr[]. The task is to find the largest element and return it.

## Examples:

Input: arr[] = [1, 8, 7, 56, 90]  
Output: 90  
Explanation: The largest element of the given array is 90.  

Input: arr[] = [5, 5, 5, 5]  
Output: 5  
Explanation: The largest element of the given array is 5.  

Input: arr[] = [10]  
Output: 10  
Explanation: There is only one element which is the largest.  

## Constraints:
1 <= arr.size()<= 106  
0 <= arr[i] <= 106  

## Idea->

Brute- sort the array and return last element which gives time complexity as O(n) and space O(1)  

Optimal- linear search through the array, assign one element to min value. Iterate through the array and check if the array element is greater than the element if greater update the element  

## Mistake->

For optimal soln i compared the array element with the previous element which ended up giving me the wrong solution.

## Code->

```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int elem=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>elem) elem=arr[i];
    }
    return elem;
    }
};