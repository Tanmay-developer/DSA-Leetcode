// Problem URL : https://leetcode.com/problems/single-element-in-a-sorted-array/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-12
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
 * The returned integer should be non-negative as well.
 * 
 * You must not use any built-in exponent function or operator.
 * 
 * For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: x = 4
 * Output: 2
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 0 <= x <= 231 - 1
 *
 **************************************************************************************************/

class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1)return x;
        int s = 1, e = x/2;
        int ans = -1;
        while(s <= e){
            long long int mid = s + (e-s)/2;
            if(mid*mid == x)return mid;
            else if(mid*mid < x){
                ans = mid;
                s = mid + 1;
            }
            else e = mid - 1;
        }
        return ans;
    }
};