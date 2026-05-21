# Problem URL : https://leetcode.com/problems/sort-colors/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-21
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * There is an integer array nums sorted in ascending order (with distinct values).
 * Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k 
 * (1 <= k < nums.length) such that the resulting array is 
 * [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
 * For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
 * 
 * Given the array nums after the possible rotation and an integer target, return the index of 
 * target if it is in nums, or -1 if it is not in nums.
 * 
 * You must write an algorithm with O(log n) runtime complexity.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [4,5,6,7,0,1,2], target = 0
 * Output: 4
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= nums.length <= 5000
 * -104 <= nums[i] <= 104
 * All values of nums are unique.
 * nums is an ascending array that is possibly rotated.
 * -104 <= target <= 104
 *
 **************************************************************************************************/
'''

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        s = 0
        e = len(nums) - 1
        while s <= e:
            mid = s + (e-s)//2
            if nums[mid] == target:
                return mid
            elif nums[mid] >= nums[s]:
                if nums[mid] >= target and nums[s] <= target:
                    e = mid - 1
                else:
                    s = mid + 1
            else:
                if nums[mid] <= target and nums[e] >= target:
                    s = mid + 1
                else:
                    e = mid - 1
        return -1