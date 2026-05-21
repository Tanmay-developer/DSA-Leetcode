# Problem URL : https://leetcode.com/problems/single-element-in-a-sorted-array/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-21
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
 * The returned integer should be non-negative as well.
 * 
 * You must not use any built-in exponent function or operator.
 * 
 * For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: x = 4
 * Output: 2
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 0 <= x <= 231 - 1
 *
 **************************************************************************************************/
'''

class Solution:
    def mySqrt(self, x: int) -> int:
        s = 0
        e = x
        ans = -1
        while s <= e:
            mid = s + (e-s)//2
            if mid * mid <= x:
                ans = mid
                s = mid + 1
            else:
                e = mid - 1
        return ans