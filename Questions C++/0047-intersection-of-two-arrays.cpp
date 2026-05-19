// Problem URL : https://leetcode.com/problems/intersection-of-two-arrays/description/
// Author      : Tanmay Chopade
// Solved On   : 2026-05-19
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************

Problem Description:
-----------------------------------------------------------------------------------------------
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the 
result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
***************************************************************************************************/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        unordered_set<int> s;
        while(i < n && j < m){
            if(nums1[i] == nums2[j]){
                s.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j])j++;
            else i++;
        }
        vector<int> ans;
        for(auto x: s)ans.push_back(x);
        return ans;
    }
};