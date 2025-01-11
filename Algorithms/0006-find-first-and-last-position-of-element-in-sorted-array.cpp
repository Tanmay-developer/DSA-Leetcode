// Problem URL : https://leetcode.com/problems/sort-colors/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-07
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
 * If target is not found in the array, return [-1, -1].
 * You must write an algorithm with O(log n) runtime complexity.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [5,7,7,8,8,10], target = 8
 * Output: [3,4]
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 0 <= nums.length <= 105
 * -109 <= nums[i] <= 109
 * nums is a non-decreasing array.
 * -109 <= target <= 109
 *
 **************************************************************************************************/

class Solution {
public:
        int findlastpos(vector<int>& nums, int target){
        int s = 0, e = nums.size()-1;
        int ans = -1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                ans = mid;
                s = mid + 1;
            }    
            else if(nums[mid] > target){
                e = mid - 1;
            }
            else s = mid + 1;
        }
        return ans;
    }

    int findfirstpos(vector<int>& nums, int target){
        int s = 0, e = nums.size()-1;
        int ans = -1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                ans = mid;
                e = mid - 1;
            }    
            else if(nums[mid] > target){
                e = mid - 1;
            }
            else s = mid + 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        first = findfirstpos(nums,target);
        last = findlastpos(nums,target);
        return {first,last};
    }
};