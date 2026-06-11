# Problem URL : https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-06-11
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
Given a binary tree, determine if it is height-balanced.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: true
Example 2:


Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
Example 3:

Input: root = []
Output: true
 

Constraints:

The number of nodes in the tree is in the range [0, 5000].
-104 <= Node.val <= 104
**************************************************************************************************/
'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, root) -> int:
        if not root:
            return 0
        
        leftHeight = self.dfs(root.left)
        if leftHeight == -1:
            return -1
        rightHeight = self.dfs(root.right)
        if rightHeight == -1:
            return -1
        
        if abs(rightHeight - leftHeight) > 1:
            return -1

        return 1 + max(rightHeight, leftHeight)

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        return self.dfs(root) != -1