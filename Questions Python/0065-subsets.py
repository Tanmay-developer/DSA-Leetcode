# Problem URL : https://leetcode.com/problems/subsets/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-06-01
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.
**************************************************************************************************/
'''

class Solution:
    def solve(self, index, nums, ans, temp):
        if index == len(nums):
            ans.append(temp[:])
            return
        
        temp.append(nums[index])
        self.solve(index+1, nums, ans, temp)
        temp.pop()
        self.solve(index+1, nums, ans, temp)

    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans = []
        temp = []
        self.solve(0, nums, ans, temp)
        return ans