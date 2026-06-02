# Problem URL : https://leetcode.com/problems/n-queens/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-06-02
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens 
attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer 
in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' 
both indicate a queen and an empty space, respectively.

 

Example 1:


Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
Example 2:

Input: n = 1
Output: [["Q"]]
 

Constraints:

1 <= n <= 9
**************************************************************************************************/
'''

class Solution:
    def isSafe(self, row, col, board, n) -> bool:
        dupRow = row
        dupCol = col
        # checking upper diagonal
        while row >= 0 and col >= 0:
            if board[row][col] == 'Q':
                return False
            row -= 1
            col -= 1
        # checking left row
        row = dupRow
        col = dupCol
        while col >= 0:
            if board[row][col] == 'Q':
                return False
            col -= 1
        # checking lower diagonal
        row = dupRow
        col = dupCol
        while row < n and col >= 0:
            if board[row][col] == 'Q':
                return False
            row += 1
            col -= 1
        
        return True

    def solve(self, col, board, ans, n):
        # If all columns are filled
        if col == n:
            temp = [''.join(row) for row in board]
            ans.append(temp)
            return
        # Try placing in each row
        for row in range(0, n):
            if self.isSafe(row, col, board, n):
                board[row][col] = 'Q' # place Queen
                self.solve(col+1, board, ans, n) # recurse
                board[row][col] = '.' # bcktrack 


    def solveNQueens(self, n: int) -> List[List[str]]:
        board = [['.' for _ in range(n)] for _ in range(n)]
        ans = []
        self.solve(0, board, ans, n)
        return ans