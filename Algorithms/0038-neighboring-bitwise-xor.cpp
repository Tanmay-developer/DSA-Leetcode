// Problem URL : https://leetcode.com/problems/neighboring-bitwise-xor/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-17
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * A 0-indexed array derived with length n is derived by computing the bitwise XOR (⊕) of adjacent 
 * values in a binary array original of length n.
 * 
 * Specifically, for each index i in the range [0, n - 1]:
 * 
 * If i = n - 1, then derived[i] = original[i] ⊕ original[0].
 * 
 * Otherwise, derived[i] = original[i] ⊕ original[i + 1].
 * 
 * Given an array derived, your task is to determine whether there exists a valid binary array original 
 * that could have formed derived.
 * 
 * Return true if such an array exists or false otherwise.
 * 
 * A binary array is an array containing only 0's and 1's
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: derived = [1,1,0]
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * n == derived.length
 * 1 <= n <= 105
 * The values in derived are either 0's or 1's
 *
 **************************************************************************************************/

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        return accumulate(derived.begin(), derived.end(), 0) % 2 == 0;
    }
};