# Problem URL : https://leetcode.com/problems/count-the-number-of-special-characters-i/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-27
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
You are given a string word. A letter c is called special if it appears both in lowercase and uppercase 
in word, and every lowercase occurrence of c appears before the first uppercase occurrence of c.

Return the number of special letters in word.

 

Example 1:

Input: word = "aaAbcBC"

Output: 3

Explanation:

The special characters are 'a', 'b', and 'c'.

Example 2:

Input: word = "abc"

Output: 0

Explanation:

There are no special characters in word.

Example 3:

Input: word = "AbBCab"

Output: 0

Explanation:

There are no special characters in word.

 

Constraints:

1 <= word.length <= 2 * 105
word consists of only lowercase and uppercase English letters.
**************************************************************************************************/
'''

class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        lastLower = [-1]*26
        firstUpper = [-1]*26

        for i, ch in enumerate(word):
            if ch.islower():
                lastLower[ord(ch)-ord('a')] = i
            else:
                idx = ord(ch) - ord('A')
                if firstUpper[idx] == -1:
                    firstUpper[idx] = i
        ans = 0
        for i in range(26):
            if lastLower[i] != -1 and firstUpper[i] != -1 and (lastLower[i] < firstUpper[i]):
                ans += 1
        return ans