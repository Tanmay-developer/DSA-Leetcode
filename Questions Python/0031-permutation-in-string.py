# Problem URL : https://leetcode.com/problems/permutation-in-string/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-23
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
 * 
 * In other words, return true if one of s1's permutations is the substring of s2.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: s1 = "ab", s2 = "eidbaooo"
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= s1.length, s2.length <= 104
 * s1 and s2 consist of lowercase English letters.
 *
 **************************************************************************************************/
'''

class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        cnt1 = [0]*26
        # Storing Count of s1 characters
        for i in range(len(s1)):
            cnt1[ord(s1[i])-ord('a')] += 1
        
        i = 0
        windowSize = len(s1)
        cnt2 = [0]*26
        while i < windowSize and i < len(s2):
            cnt2[ord(s2[i]) - ord('a')] += 1
            i += 1
        if cnt1 == cnt2:
            return True

        while i < len(s2):
            cnt2[ord(s2[i])-ord('a')] += 1
            cnt2[ord(s2[i-windowSize]) - ord('a')] -= 1

            i += 1
            if cnt1 == cnt2:
                return True
        return False