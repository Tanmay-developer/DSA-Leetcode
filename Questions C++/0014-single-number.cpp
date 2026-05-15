// Problem URL : https://leetcode.com/problems/single-number/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-11
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
 * 
 * You must implement a solution with a linear runtime complexity and use only constant extra space.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [2,2,1]
 * Output: 1
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= nums.length <= 3 * 104
 * -3 * 104 <= nums[i] <= 3 * 104
 *
 **************************************************************************************************/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int i = 1 ; i < nums.size(); i++)
            ans ^= nums[i];
        return ans;
    }
};