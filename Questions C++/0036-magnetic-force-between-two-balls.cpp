// Problem URL : https://leetcode.com/problems/magnetic-force-between-two-balls/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-15
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls 
 * if they are put in his new invented basket. Rick has n empty baskets, the ith basket is at position[i], 
 * Morty has m balls and needs to distribute the balls into the baskets such that the minimum magnetic 
 * force between any two balls is maximum.
 * 
 * Rick stated that magnetic force between two different balls at positions x and y is |x - y|.
 * 
 * Given the integer array position and the integer m. Return the required force.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: position = [1,2,3,4,7], m = 3
 * Output: 3
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * n == position.length
 * 2 <= n <= 105
 * 1 <= position[i] <= 109
 * All integers in position are distinct.
 * 2 <= m <= position.length
 *
 **************************************************************************************************/

class Solution {
public:
    bool isPossible(vector<int>& position, int mid, int n, int m){
        int ballCnt = 1;
        int lastpos = position[0];
        for(int i = 1 ; i < n ; i++){
            if(abs(position[i] - lastpos) >= mid){
                ballCnt++;
                if(ballCnt == m)return true;
                lastpos = position[i];
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int mini = INT_MAX, maxi = INT_MIN;
        int n = position.size();
        for(int i = 0 ; i < n ; i++){
            maxi = max(maxi,position[i]);
        }
        int s = 0, e = maxi;
        int ans = -1;
        while (s <= e){
            int mid = s + (e-s)/2;
            if(isPossible(position, mid, n , m)){
                ans = mid;
                s = mid + 1;
            }
            else e = mid - 1;
        }
        return ans;
    }
};