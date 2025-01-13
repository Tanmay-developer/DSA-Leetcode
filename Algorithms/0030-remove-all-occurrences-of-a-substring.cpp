// Problem URL : https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-13
// Last Updated: [Optional: Last modification date or version number]

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

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() != 0 && s.find(part) < s.length())
            s.erase(s.find(part),part.length());
        return s;
    }
};