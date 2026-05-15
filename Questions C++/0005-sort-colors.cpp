// Problem URL : https://leetcode.com/problems/sort-colors/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-07
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects 
 * of the same color are adjacent, with the colors in the order red, white, and blue.
 * We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [2,0,2,1,1,0]
 * Output: [0,0,1,1,2,2]
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * n == nums.length
 * 1 <= n <= 300
 * nums[i] is either 0, 1, or 2.
 *
 **************************************************************************************************/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0,mid=0,e=nums.size()-1;
        while(mid<=e){
            if(nums[mid]==1)mid++;
            else if(nums[mid] == 0){
                swap(nums[s],nums[mid]);
                mid++;
                s++;
            }
            else {
                swap(nums[mid],nums[e]);
                e--;
            }
        }
    }
};