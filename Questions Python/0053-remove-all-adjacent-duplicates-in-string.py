# Problem URL : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-23
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 You are given a string s consisting of lowercase English letters. A duplicate removal consists of 
 choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the 
answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the 
only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, 
so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"
 

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.
 **************************************************************************************************/
'''

class Solution:
    def removeDuplicates(self, s: str) -> str:
        ans = []
        for ch in s:
            if ans and ans[-1] == ch:
                ans.pop()
            else:
                ans.append(ch)
        return "".join(ans)