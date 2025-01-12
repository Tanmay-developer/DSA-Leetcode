// Problem URL : https://leetcode.com/problems/single-element-in-a-sorted-array/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-12
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * You are given a sorted array consisting of only integers where every element appears exactly twice, 
 * except for one element which appears exactly once.
 * 
 * Return the single element that appears only once.
 * 
 * Your solution must run in O(log n) time and O(1) space.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: position = nums = [1,1,2,3,3,4,4,8,8]
 * Output: 2
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= nums.length <= 105
 * 0 <= nums[i] <= 105
 *
 **************************************************************************************************/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return nums[0]; //Single element case
        if(nums[0] != nums[1])return nums[0]; //Handling edge case to trim search space from starting
        if(nums[n-1] != nums[n-2])return nums[n-1]; //Handling edge case to trim search space from end
        int s = 1, e = n-2;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])
                return nums[mid];
            else if((mid%2 == 1 && nums[mid] == nums[mid-1]) || (mid%2 == 0 && nums[mid] == nums[mid+1]))
                s = mid + 1;
            else e = mid - 1;
        }
        return -1;
    }
};