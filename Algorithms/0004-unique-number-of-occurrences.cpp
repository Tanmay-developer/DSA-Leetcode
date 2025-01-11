// Problem URL : https://leetcode.com/problems/unique-number-of-occurrences/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-06
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an array of integers arr, return true if the number of occurrences of each value in the 
 * array is unique or false otherwise.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: arr = [1,2,2,1,1,3]
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= arr.length <= 1000
 * -1000 <= arr[i] <= 1000
 *
 **************************************************************************************************/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> v;
        int i=0;
        sort(arr.begin(),arr.end());
        while(i < arr.size()){
            int count = 1;
            for(int j=i+1; j < arr.size(); j++){
                if(arr[i] == arr[j])count++;
            }
            v.push_back(count);
            i += count;
        }
        sort(v.begin(),v.end());
        for(int i = 0; i < v.size()-1; i++){
            if(v[i] == v[i+1])return false;
        }
        return true;
    }
};