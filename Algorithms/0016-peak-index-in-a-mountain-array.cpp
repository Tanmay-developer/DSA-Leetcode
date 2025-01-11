// Problem URL : https://leetcode.com/problems/contains-duplicate/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-11
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an integer array nums, return true if any value appears at least twice in the array, 
 * and return false if every element is distinct.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [1,2,3,1]
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= nums.length <= 105
 * -109 <= nums[i] <= 109
 *
 **************************************************************************************************/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0, e = arr.size()-1;
        while(s < e){
            int mid = s + (e-s)/2;
            if(arr[mid] < arr[mid+1])
                s = mid+1;
            else e = mid;
        }
        return e;
    }
};