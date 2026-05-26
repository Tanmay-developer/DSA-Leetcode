# Problem URL : https://leetcode.com/problems/rotate-array/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-26
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [1,2,3,4,5,6,7], k = 3
 * Output: [5,6,7,1,2,3,4]
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= nums.length <= 105
 * -231 <= nums[i] <= 231 - 1
 * 0 <= k <= 105
 *
 **************************************************************************************************/
'''

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k = k % n
        nums.reverse()
        nums[:k] = reversed(nums[:k])
        nums[k:] = reversed(nums[k:])