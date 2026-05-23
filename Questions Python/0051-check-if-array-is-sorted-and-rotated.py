# Problem URL : https://www.geeksforgeeks.org/problems/insertion-sort/1
# Author      : Tanmay Chopade
# Solved On   : 2026-05-22
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************

Problem Description:
-----------------------------------------------------------------------------------------------
Given an array nums, return true if the array was originally sorted in non-decreasing order, then 
rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that 
B[i] == A[(i+x) % A.length] for every valid index i.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
Example 2:

Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
Example 3:

Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100
***************************************************************************************************/
'''

class Solution:
    def check(self, nums: List[int]) -> bool:
        if len(nums) <= 1:
            return True
        cnt = 0
        for i in range(1, len(nums)):
            if nums[i] < nums[i-1]:
                cnt += 1
                if cnt > 1:
                    return False
        
        if nums[0] < nums[len(nums)-1]:
            cnt += 1
        
        return cnt <= 1