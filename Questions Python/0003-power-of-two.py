# Problem URL : https://leetcode.com/problems/power-of-two/description/
# Author      : Tanmay Chopade
# Solved On   : 2025-01-06
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an integer n, return true if it is a power of two. Otherwise, return false.
 * An integer n is a power of two, if there exists an integer x such that n == 2x.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: n = 1
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * -231 <= n <= 231 - 1
 *
 **************************************************************************************************/
'''

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        return n > 0 and (n & (n - 1)) == 0