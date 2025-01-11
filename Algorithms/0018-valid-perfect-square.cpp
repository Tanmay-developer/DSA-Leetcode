// Problem URL : https://leetcode.com/problems/valid-perfect-square/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-12
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given a positive integer num, return true if num is a perfect square or false otherwise.
 * 
 * A perfect square is an integer that is the square of an integer. In other words, 
 * it is the product of some integer with itself.
 * 
 * You must not use any built-in library function, such as sqrt.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: num = 16
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= num <= 231 - 1
 *
 **************************************************************************************************/

class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 0 , e = num;
        while(s <= e){
            long long mid = s + (e-s)/2;
            if(mid*mid == num)return true;
            if(mid*mid > num)e = mid - 1;
            else s = mid + 1;
        }
        return false;
    }
};