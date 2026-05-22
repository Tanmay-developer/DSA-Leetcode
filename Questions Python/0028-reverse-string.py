# Problem URL : https://leetcode.com/problems/reverse-string/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-23
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Write a function that reverses a string. The input string is given as an array of characters s.
 * 
 * You must do this by modifying the input array in-place with O(1) extra memory.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: s = ["h","e","l","l","o"]
 * Output: ["o","l","l","e","h"]
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= s.length <= 105
 * s[i] is a printable ascii character.
 *
 **************************************************************************************************/
'''

class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        st = 0
        e = len(s) - 1
        while st < e:
            s[st], s[e] = s[e], s[st]
            st += 1
            e -= 1