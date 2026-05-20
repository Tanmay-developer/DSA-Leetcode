# Problem URL : https://leetcode.com/problems/sort-colors/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-20
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
 * If target is not found in the array, return [-1, -1].
 * You must write an algorithm with O(log n) runtime complexity.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [5,7,7,8,8,10], target = 8
 * Output: [3,4]
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 0 <= nums.length <= 105
 * -109 <= nums[i] <= 109
 * nums is a non-decreasing array.
 * -109 <= target <= 109
 *
 **************************************************************************************************/
'''

class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        s = 0
        e = len(nums) - 1
        mid = s + (e-s)//2
        firstPos = -1
        lastPos = -1
        while s <= e:
            if nums[mid] == target:
                firstPos = mid
                e = mid - 1
            elif nums[mid] > target:
                e = mid - 1
            else:
                s = mid + 1
            mid = s + (e - s)//2
        s = 0
        e = len(nums) - 1
        mid = s + (e-s)//2
        while s <= e:
            if nums[mid] == target:
                lastPos = mid
                s = mid + 1
            elif nums[mid] > target:
                e = mid - 1
            else:
                s = mid + 1
            mid = s + (e - s)//2
        return [firstPos, lastPos]