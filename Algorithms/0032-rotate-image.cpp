// Problem URL : https://leetcode.com/problems/permutation-in-string/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-13
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
 * 
 * You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
 * DO NOT allocate another 2D matrix and do the rotation.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
 * Output: [[7,4,1],[8,5,2],[9,6,3]]
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * n == matrix.length == matrix[i].length
 * 1 <= n <= 20
 * -1000 <= matrix[i][j] <= 1000
 *
 **************************************************************************************************/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int cnt = 0, total = n*m;
            for(int i = 0 ; i < n ; i++)
                for(int j = 0 ; j < m ; j++)
                    swap(matrix[i][j],matrix[j][i]);

            for(int i = 0 ; i < n ; i++)
                reverse(matrix[i].begin(),matrix[i].end());
    }
};