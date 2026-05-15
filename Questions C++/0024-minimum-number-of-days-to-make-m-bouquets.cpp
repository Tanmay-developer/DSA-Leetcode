// Problem URL : https://leetcode.com/problems/koko-eating-bananas/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-12
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * You are given an integer array bloomDay, an integer m and an integer k.
 * 
 * You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.
 * 
 * The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.
 * 
 * Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: bloomDay = [1,10,3,10,2], m = 3, k = 1
 * Output: 3
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * bloomDay.length == n
 * 1 <= n <= 105
 * 1 <= bloomDay[i] <= 109
 * 1 <= m <= 106
 * 1 <= k <= n
 *
 **************************************************************************************************/

class Solution {
public:
    int isPossible(vector<int>& bloomDay, int n,int k, int mid, int m){
        int bouquetCnt = 0;
        int flower = 0;
        for(int i = 0; i < n; i++){
            if(bloomDay[i] <= mid){
                flower++;
            }
            else{
                flower = 0;
            }
            if(flower == k){
                bouquetCnt++;
                flower = 0;
            }
        }
        return bouquetCnt >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            mini = min(mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        }
        int s = mini, e = maxi;
        int ans = -1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(isPossible(bloomDay, n, k, mid, m)){
                ans = mid;
                e = mid - 1;
            }
            else s = mid + 1;
        }
        return ans;
    }
};