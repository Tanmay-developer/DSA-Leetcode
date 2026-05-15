// Problem URL : https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-11
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
 * 
 * Return the index of the peak element.
 * 
 * Your task is to solve it in O(log(n)) time complexity.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: arr = [0,1,0]
 * Output: 1
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 3 <= arr.length <= 105
 * 0 <= arr[i] <= 106
 * arr is guaranteed to be a mountain array.
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