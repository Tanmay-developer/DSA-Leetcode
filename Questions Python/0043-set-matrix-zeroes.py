# Problem URL : https://leetcode.com/problems/set-matrix-zeroes/description/
# Author      : Tanmay Chopade
# Solved On   : 2025-06-06
# Last Updated: [Optional: Last modification date or version number]

'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
 * You must do it in place.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
 * Output: [[1,0,1],[0,0,0],[1,0,1]]
 *
 * Constraints:
 * -----------------------------------------------------------------------------------------------
 * m == matrix.length
 * n == matrix[0].length
 * 1 <= m, n <= 200
 * -231 <= matrix[i][j] <= 231 - 1
 *
 **************************************************************************************************/
'''

class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        m = len(matrix)
        n = len(matrix[0])

        firstRowZero = False
        firstColumnZero = False

        for i in range(m):
            if matrix[i][0] == 0:
                firstColumnZero = True
                break
        
        for j in range(n):
            if matrix[0][j] == 0:
                firstRowZero = True
                break 

        for i in range(1, m):
            for j in range(1, n):
                if matrix[i][j] == 0:
                    matrix[i][0] = 0
                    matrix[0][j] = 0
        
        for i in range(1, m):
            for j in range(1, n):
                if matrix[i][0] == 0 or matrix[0][j] == 0:
                    matrix[i][j] = 0

        if firstRowZero:
            for j in range(n):
                matrix[0][j] = 0

        if firstColumnZero:
            for i in range(m):
                matrix[i][0] = 0 