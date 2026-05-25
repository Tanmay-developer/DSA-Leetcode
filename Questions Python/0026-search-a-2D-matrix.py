# Problem URL : https://leetcode.com/problems/search-a-2d-matrix/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-25
# Last Updated: [Optional: Last modification date or version number]
'''
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
'''

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row = len(matrix)
        col = len(matrix[0])
        s = 0
        e = row*col - 1
        while s <= e:
            mid = s + (e-s)//2
            element = matrix[mid//col][mid%col]
            if element == target:
                return True
            elif element > target:
                e = mid - 1
            else:
                s = mid + 1
        return False