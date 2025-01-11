// Problem URL : https://leetcode.com/problems/reverse-integer/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-06
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the 
 * value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: x = 123
 * Output: 321
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * -231 <= x <= 231 - 1
 *
 **************************************************************************************************/

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x != 0){
            int digit = x%10;
            if((ans > INT_MAX/10) || (ans < INT_MIN/10)) //So that ans doesn't exceed integer limit 
                return 0;
            ans = ans*10 + digit; 
            x /= 10;
        }
        return ans;
    }
};