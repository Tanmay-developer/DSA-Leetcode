# Problem URL : https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-29
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
You are given an integer array nums.

You replace each element in nums with the sum of its digits.

Return the minimum element in nums after all replacements.

 

Example 1:

Input: nums = [10,12,13,14]

Output: 1

Explanation:

nums becomes [1, 3, 4, 5] after all replacements, with minimum element 1.

Example 2:

Input: nums = [1,2,3,4]

Output: 1

Explanation:

nums becomes [1, 2, 3, 4] after all replacements, with minimum element 1.

Example 3:

Input: nums = [999,19,199]

Output: 10

Explanation:

nums becomes [27, 10, 19] after all replacements, with minimum element 10.

 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 104
**************************************************************************************************/
'''

class Solution:
    def digitSum(self, x: int) -> int:
        ans = 0
        while x != 0:
            digit = x % 10
            ans = ans + digit
            x = x // 10
        return ans

    def minElement(self, nums: List[int]) -> int:
        ans = inf
        for i in range(len(nums)):
            if ans > self.digitSum(nums[i]):
                ans = self.digitSum(nums[i])
        return ans