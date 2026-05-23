# Problem URL : https://leetcode.com/problems/valid-palindrome/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-23
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and 
 * removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters 
 * include letters and numbers.
 * 
 * Given a string s, return true if it is a palindrome, or false otherwise.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: s = "A man, a plan, a canal: Panama"
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= s.length <= 2 * 105
 * s consists only of printable ASCII characters.
 *
 **************************************************************************************************/
'''

class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = ''.join(c.lower() for c in s if c.isalnum())
        if s == s[::-1]:
            return True
        else:
            return False