# Problem URL : https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-19
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************

Problem Description:
-----------------------------------------------------------------------------------------------
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and 
each integer appears at most twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding 
the space needed to store the output


Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
***************************************************************************************************/
'''

class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = []
        nums.sort()
        for i in range(n-1):
            if nums[i] == nums[i+1]:
                ans.append(nums[i])
        return ans