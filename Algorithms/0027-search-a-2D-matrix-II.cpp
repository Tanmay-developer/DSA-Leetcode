// Problem URL : https://leetcode.com/problems/search-a-2d-matrix-ii/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-13
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. 
 * This matrix has the following properties:
 * 
 * Integers in each row are sorted in ascending from left to right.
 * 
 * Integers in each column are sorted in ascending from top to bottom.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * m == matrix.length
 * n == matrix[i].length
 * 1 <= n, m <= 300
 * -109 <= matrix[i][j] <= 109
 * All the integers in each row are sorted in ascending order.
 * All the integers in each column are sorted in ascending order.
 * -109 <= target <= 109
 *
 **************************************************************************************************/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row = 0, col = m - 1;
        while(row < n && col >= 0){
            if(matrix[row][col] == target)return true;
            if(matrix[row][col] < target)row++;
            else col--;
        }
        return false;
    }
};