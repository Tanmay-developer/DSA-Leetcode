// Problem URL : https://leetcode.com/problems/bitwise-xor-of-all-pairings/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-16
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * You are given two 0-indexed arrays, nums1 and nums2, consisting of non-negative integers. There 
 * exists another array, nums3, which contains the bitwise XOR of all pairings of integers between 
 * nums1 and nums2 (every integer in nums1 is paired with every integer in nums2 exactly once).
 * 
 * Return the bitwise XOR of all integers in nums3.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums1 = [2,1,3], nums2 = [10,2,5,0]
 * Output: 13
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= nums1.length, nums2.length <= 105
 * 0 <= nums1[i], nums2[j] <= 109
 *
 **************************************************************************************************/

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int c1 = nums1.size();
        int c2 = nums2.size();
        int x1 = 0, x2 = 0;
        if (c1 % 2 != 0)
            for (int& num : nums2) 
                x2 ^= num;
        if (c2 % 2 != 0) 
            for (int& num : nums1)
                x1 ^= num;
        return x1 ^ x2;
    }
};