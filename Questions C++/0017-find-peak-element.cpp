// Problem URL : https://leetcode.com/problems/find-peak-element/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-11
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * A peak element is an element that is strictly greater than its neighbors.
 * 
 * Given a 0-indexed integer array nums, find a peak element, and return its index. 
 * If the array contains multiple peaks, return the index to any of the peaks.
 * 
 * You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be 
 * strictly greater than a neighbor that is outside the array.
 * 
 * You must write an algorithm that runs in O(log n) time.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [1,2,3,1]
 * Output: 2
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= nums.length <= 1000
 * -231 <= nums[i] <= 231 - 1
 * nums[i] != nums[i + 1] for all valid i.
 *
 **************************************************************************************************/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;
        int mid = s + (e-s)/2;
        while(s<e){
            if(nums[mid] < nums[mid+1]) s = mid + 1;
            else e = mid;
            mid = s + (e-s)/2;
        }
        return s;
    }
};