// Problem URL : https://leetcode.com/problems/combination-sum-ii/description/
// Author      : Tanmay Chopade
// Solved On   : 2026-06-01
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
Given a collection of candidate numbers (candidates) and a target number (target), find all unique 
combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]
 

Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30
**************************************************************************************************/

class Solution {
public:
    void solve(int index, vector<int>& arr, int target, vector<int>& temp, vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int i = index; i < arr.size(); i++){
            if(i > index && arr[i-1] == arr[i])continue;
            if(arr[i] > target)break;
            temp.push_back(arr[i]);
            solve(i+1,arr, target-arr[i], temp, ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        solve(0, candidates, target, temp, ans);
        return ans;
    }
};