# Problem URL : https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-23
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given two strings s and part, perform the following operation on s until all occurrences of the 
 * substring part are removed:
 * 
 * Find the leftmost occurrence of the substring part and remove it from s.
 * 
 * Return s after removing all occurrences of part.
 * 
 * A substring is a contiguous sequence of characters in a string.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: s = "daabcbaabcbc", part = "abc"
 * Output: "dab"
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= s.length <= 1000
 * 1 <= part.length <= 100
 * s​​​​​​ and part consists of lowercase English letters.
 *
 **************************************************************************************************/
'''

class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        while s.find(part) != -1:
            s = s.replace(part,'', 1)
        return s