// Problem URL : https://leetcode.com/problems/complement-of-base-10-integer/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-06
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 
 * 1's to 0's in its binary representation.
 * For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
 * Given an integer n, return its complement.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: n = 5
 * Output: 2
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 0 <= n < 109
 *
 **************************************************************************************************/

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int mask = 0;
        int m = n;
        while (m != 0){
            mask  = (mask << 1) | 1;
            m = m >> 1;
        }
        return (~n) & mask;
    }
};