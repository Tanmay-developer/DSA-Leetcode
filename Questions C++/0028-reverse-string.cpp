// Problem URL : https://leetcode.com/problems/reverse-string/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-13
// Last Updated: [Optional: Last modification date or version number]

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

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0, end = s.size()-1;
        while(start < end)
            swap(s[start++],s[end--]);
    }
};