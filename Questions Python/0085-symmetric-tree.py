# Problem URL : https://leetcode.com/problems/symmetric-tree/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-06-12
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

 

Example 1:


Input: root = [1,2,2,3,4,4,3]
Output: true
Example 2:


Input: root = [1,2,2,null,3,null,3]
Output: false
 

Constraints:

The number of nodes in the tree is in the range [1, 1000].
-100 <= Node.val <= 100
**************************************************************************************************/
'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, left, right) -> bool:
        if left is None or right is None:
            return left == right
        if left.val != right.val:
            return False
        return self.solve(left.left, right.right) and self.solve(left.right, right.left)
        
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        return root is None or self.solve(root.left, root.right) 