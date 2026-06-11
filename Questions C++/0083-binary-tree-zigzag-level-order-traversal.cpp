// Problem URL : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
// Author      : Tanmay Chopade
// Solved On   : 2026-06-11
// Last Updated: [Optional: Last modification date or version number]

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)return ans;

        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;
        while(!q.empty()){
            int n = q.size();
            vector<int> level(n);
            for(int i = 0; i < n; i++){
                TreeNode* temp = q.front();
                q.pop();
                //Where to Insert depending on flag 
                int index = leftToRight ? i : (n-i-1);
                level[index] = temp->val;
                //Check for left
                if(temp-> left)q.push(temp->left);
                if(temp-> right)q.push(temp->right);
            }
            leftToRight = !leftToRight;
            ans.push_back(level);
        }
        return ans;
    }

};