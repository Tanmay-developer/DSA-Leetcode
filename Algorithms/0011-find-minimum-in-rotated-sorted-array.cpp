// Problem URL : https://leetcode.com/problems/sort-colors/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-07
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
 * 
 * [4,5,6,7,0,1,2] if it was rotated 4 times.
 * [0,1,2,4,5,6,7] if it was rotated 7 times.
 * 
 * Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
 * 
 * Given the sorted rotated array nums of unique elements, return the minimum element of this array.
 * 
 * You must write an algorithm that runs in O(log n) time.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [3,4,5,1,2]
 * Output: 1
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * n == nums.length
 * 1 <= n <= 5000
 * -5000 <= nums[i] <= 5000
 * All the integers of nums are unique.
 * nums is sorted and rotated between 1 and n times.
 *
 **************************************************************************************************/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size()-1;
        while(s < e){
            if(nums[s] < nums[e]) return nums[s];
            int mid = s + (e-s)/2;
            if(nums[mid] >= nums[0]){
                s = mid + 1;
            }
            else e = mid;
        }
        return nums[s];
    }
};