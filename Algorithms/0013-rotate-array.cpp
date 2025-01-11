// Problem URL : https://leetcode.com/problems/rotate-array/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-10
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [1,2,3,4,5,6,7], k = 3
 * Output: [5,6,7,1,2,3,4]
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= nums.length <= 105
 * -231 <= nums[i] <= 231 - 1
 * 0 <= k <= 105
 *
 **************************************************************************************************/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.begin()+n);
    }
};