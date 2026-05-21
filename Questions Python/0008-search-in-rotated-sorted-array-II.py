# Problem URL : https://leetcode.com/problems/sort-colors/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-21
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).
 * 
 * Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) 
 * such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
 * 
 * For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].
 * 
 * Given the array nums after the rotation and an integer target, return true if target is in nums, or 
 * false if it is not in nums.
 * 
 * You must decrease the overall operation steps as much as possible.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [2,5,6,0,0,1,2], target = 0
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= nums.length <= 5000
 * -104 <= nums[i] <= 104
 * nums is guaranteed to be rotated at some pivot.
 * -104 <= target <= 104
 *
 **************************************************************************************************/
'''

class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        s = 0
        e = len(nums) - 1
        while s <= e:
            mid = s + (e-s)//2
            if nums[mid] == target:
                return True
            if nums[mid] == nums[s] and nums[mid] == nums[e]:
                s += 1
                e -= 1
            elif nums[mid] >= nums[s]:
                if target >= nums[s] and target <= nums[mid]:
                    e = mid - 1
                else:
                    s = mid + 1
            else:
                if target >= nums[mid] and target <= nums[e]:
                    s = mid + 1
                else:
                    e = mid - 1
        return False