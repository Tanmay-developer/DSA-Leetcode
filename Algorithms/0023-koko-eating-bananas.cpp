// Problem URL : https://leetcode.com/problems/koko-eating-bananas/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-12
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. 
 * The guards have gone and will come back in h hours.
 * 
 * Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas 
 * and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead 
 * and will not eat any more bananas during this hour.
 * 
 * Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
 * 
 * Return the minimum integer k such that she can eat all the bananas within h hours.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: piles = [3,6,7,11], h = 8
 * Output: 4
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= piles.length <= 104
 * piles.length <= h <= 109
 * 1 <= piles[i] <= 109
 *
 **************************************************************************************************/

class Solution {
public:
    bool isPossible(vector<int>& piles, int n, int mid, int h){
        int time = 0;
        for(int i = 0; i < n; i++){
            time += ceil((double)piles[i]/(double)mid);
            if(time > h)
                return false;
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int maxi = INT_MIN;
        int n = piles.size();
        for(int i = 0; i < piles.size() ; i++){
            maxi = max(piles[i],maxi);
        }
        int e = maxi;
        int ans = -1;
        while(s <= e){
            int mid = s +(e-s)/2;
            if(isPossible(piles,n,mid,h)){
                ans = mid;
                e = mid - 1;
            }
            else s = mid + 1;
        }
        return ans;
    }
};