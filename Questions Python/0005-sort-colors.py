# Problem URL : https://leetcode.com/problems/sort-colors/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-19
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects 
 * of the same color are adjacent, with the colors in the order red, white, and blue.
 * We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [2,0,2,1,1,0]
 * Output: [0,0,1,1,2,2]
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * n == nums.length
 * 1 <= n <= 300
 * nums[i] is either 0, 1, or 2.
 *
 **************************************************************************************************/
'''

class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i = 0
        j = 0
        k = len(nums) - 1
        while j <= k:
            if nums[j] == 0:
                nums[i], nums[j] = nums[j], nums[i]
                i += 1
                j += 1
            elif nums[j] == 1:
                j += 1
            else:
                nums[j], nums[k] = nums[k], nums[j]
                k -= 1