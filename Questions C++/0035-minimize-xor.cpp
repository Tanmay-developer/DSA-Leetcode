// Problem URL : https://leetcode.com/problems/minimize-xor/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-15
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given two positive integers num1 and num2, find the positive integer x such that:
 * 
 * x has the same number of set bits as num2, and
 * 
 * The value x XOR num1 is minimal.
 * 
 * Note that XOR is the bitwise XOR operation.
 * 
 * Return the integer x. The test cases are generated such that x is uniquely determined.
 * 
 * The number of set bits of an integer is the number of 1's in its binary representation.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: num1 = 3, num2 = 5
 * Output: 3
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= num1, num2 <= 109
 *
 **************************************************************************************************/

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int a = __builtin_popcount(num1), b = __builtin_popcount(num2), res = num1;
        for (int i = 0; i < 32; ++i) {
            if (a > b && ((1 << i) & num1) > 0) {
                res ^= 1 << i;
                a--;
            }
            if (a < b && ((1 << i) & num1) == 0) {
                res ^= 1 << i;
                a++;
            }
        }
        return res;
    }
};