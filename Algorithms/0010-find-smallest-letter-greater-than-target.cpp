// Problem URL : https://leetcode.com/problems/sort-colors/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-07
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * You are given an array of characters letters that is sorted in non-decreasing order, and a character target. 
 * There are at least two different characters in letters.
 * 
 * Return the smallest character in letters that is lexicographically greater than target. If such a character 
 * does not exist, return the first character in letters.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: letters = ["c","f","j"], target = "a"
 * Output: "c"
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 2 <= letters.length <= 104
 * letters[i] is a lowercase English letter.
 * letters is sorted in non-decreasing order.
 * letters contains at least two different characters.
 * target is a lowercase English letter.
 *
 **************************************************************************************************/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto ans = upper_bound(letters.begin(),letters.end(), target);
        return ans == letters.end() ? letters[0] : *ans;
    }
};