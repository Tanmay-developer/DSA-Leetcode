// Problem URL : https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-13
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, 
 * divide all the array by it, and sum the division's result. Find the smallest divisor such that the result 
 * mentioned above is less than or equal to threshold.
 * 
 * Each result of the division is rounded to the nearest integer greater than or equal to that element. 
 * (For example: 7/3 = 3 and 10/2 = 5).
 * 
 * The test cases are generated so that there will be an answer.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [1,2,5,9], threshold = 6
 * Output: 5
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= nums.length <= 5 * 104
 * 1 <= nums[i] <= 106
 * nums.length <= threshold <= 106
 *
 **************************************************************************************************/

class Solution {
public:
    int helper(vector<int>& nums, int n, int mid){
        int total = 0;
        for(int i = 0 ;i < n; i++){
            total += ceil((double)nums[i]/(double)mid);
        }
        return total;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int s = 1;
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            maxi = max(maxi,nums[i]);
        }
        int e = maxi;
        int ans = -1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(helper(nums,n, mid) <= threshold){
                ans = mid;
                e = mid - 1;
            }
            else s = mid + 1;
        }
        return ans;
    }
};