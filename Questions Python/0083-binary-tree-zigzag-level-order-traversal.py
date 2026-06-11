# Problem URL : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-06-11
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., 
from left to right, then right to left for the next level and alternate between).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[20,9],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 2000].
-100 <= Node.val <= 100
**************************************************************************************************/
'''

from collections import deque
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        ans = []
        if not root:
            return ans

        q = deque([root])
        leftToRight = True
        while q:
            n = len(q)
            level = [0]*n
            for i in range(n):
                temp = q.popleft()
                # Determine index where this value should be stored
                index = i if leftToRight else n - 1 - i
                level[index] = temp.val
                # Add left child to queue if it exists
                if temp.left:
                    q.append(temp.left)
                # Add right child to queue if it exists
                if temp.right:
                    q.append(temp.right)

            leftToRight = not leftToRight
            ans.append(level)
        
        return ans