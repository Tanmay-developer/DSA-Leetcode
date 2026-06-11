// Problem URL : https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
// Author      : Tanmay Chopade
// Solved On   : 2026-06-11
// Last Updated: [Optional: Last modification date or version number]

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


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int dfs(TreeNode* root){
        if(!root)
            return 0;
        
        int LeftHeight = dfs(root->left);
        if(LeftHeight == -1)return -1;

        int RightHeight = dfs(root->right);
        if(RightHeight == -1)return -1;

        if(abs(LeftHeight-RightHeight) > 1)return -1;

        return max(LeftHeight, RightHeight)+1;
    }
    bool isBalanced(TreeNode* root) {
        return dfs(root) != -1;
    }
};