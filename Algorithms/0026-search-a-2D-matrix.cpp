// Problem URL : https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-13
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * You are given an m x n integer matrix matrix with the following two properties:
 * 
 * Each row is sorted in non-decreasing order.
 * The first integer of each row is greater than the last integer of the previous row.
 * Given an integer target, return true if target is in matrix or false otherwise.
 * 
 * You must write a solution in O(log(m * n)) time complexity.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * m == matrix.length
 * n == matrix[i].length
 * 1 <= m, n <= 100
 * -104 <= matrix[i][j], target <= 104
 *
 **************************************************************************************************/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int s = 0, e = m*n - 1;
        while(s <= e){
            int mid = s + (e-s)/2;
            int element = matrix[mid/n][mid%n];
            if(element == target)return true;
            else if(element < target) s = mid + 1;
            else e = mid - 1;
        }
        return false;
    }
};