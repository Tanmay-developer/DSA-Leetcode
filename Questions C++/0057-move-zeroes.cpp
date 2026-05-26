// Problem URL : https://leetcode.com/problems/move-zeroes/description/
// Author      : Tanmay Chopade
// Solved On   : 2026-05-26
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of 
the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Could you minimize the total number of operations done?
**************************************************************************************************/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] != 0)
                swap(nums[j++],nums[i]);
    }
};