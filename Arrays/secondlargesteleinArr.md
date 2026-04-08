# Largest Element in Array

Question link -> https://www.geeksforgeeks.org/problems/second-largest3735/1

Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

## Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.

Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.

Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist.  

## Constraints:
2 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105

## Idea->
 
Optimal- i keep largest ele as arr[0] and smallest as -1 then i iteratate the loop to find the largest elem once i find it i again iterate through to loop to find the second largest ele.

## Mistake->

i tried using 2 pointer as i assigned larg ele and second ele as two pointers on index 1 & 0 respectively which further created problem of iterating.

## Code->

```cpp
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        int l=arr[0];
        int sl=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>l) l=arr[i];
        }
        //for second largest
        for(int i=0;i<n;i++){
            if(arr[i]>sl && arr[i]<l) sl=arr[i];
        }
        return sl;
        
    }
};