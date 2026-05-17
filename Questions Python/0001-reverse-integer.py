# Problem URL : https://leetcode.com/problems/reverse-integer/description/
# Author      : Tanmay Chopade
# Solved On   : 2025-01-06
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the 
 * value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: x = 123
 * Output: 321
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * -231 <= x <= 231 - 1
 *
 **************************************************************************************************/
'''

class Solution:
    def reverse(self, x: int) -> int:
        ans = 0
        if x < 0:
            ans = int(str(x)[1:][::-1]) * -1
        else:
            ans = int(str(x)[::-1])
        
        if ans > 2 ** 31 -1 or ans < -2 ** 31:
            return 0
        return ans