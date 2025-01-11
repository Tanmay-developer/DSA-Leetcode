// Problem URL : https://leetcode.com/problems/split-array-largest-sum/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-12
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the 
 * largest sum of any subarray is minimized.
 * 
 * Return the minimized largest sum of the split.
 * 
 * A subarray is a contiguous part of the array.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: nums = [7,2,5,10,8], k = 2
 * Output: 18
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= nums.length <= 1000
 * 0 <= nums[i] <= 106
 * 1 <= k <= min(50, nums.length)
 *
 **************************************************************************************************/

class Solution {
public:
    bool isPossible(int n, int k, int mid,vector<int>& nums){
        int cnt = 1;
        int total = 0;
        for(int i = 0 ; i < n ; i++){
            if(total + nums[i] <= mid){
                total += nums[i];
            }
            else{
                cnt++;
                if(cnt > k || nums[i] > mid) return false;
                total = 0;
                total += nums[i];
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int s = 0;
        int total = 0;
        int n = nums.size();
        for(int i = 0 ; i < nums.size() ; i++)
            total += nums[i];
        int e = total;
        int ans = -1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(isPossible(n,k,mid,nums)){
                ans = mid;
                e = mid - 1;
            }
            else s = mid + 1;
        }
        return ans;
    }
};