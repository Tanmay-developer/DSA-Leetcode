// Problem URL : https://www.geeksforgeeks.org/problems/merge-sort/
// Author      : Tanmay Chopade
// Solved On   : 2026-06-02
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
Given an array arr[], its starting position l and its ending position r. Sort the array using the 
merge sort algorithm.

Examples:

Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9]
Explanation: We get the sorted array after using merge sort
Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Explanation: We get the sorted array after using merge sort 
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105
**************************************************************************************************/

class Solution {
  public:
    void merge(vector<int>& arr, int l, int r, int mid){
        int left = l;
        int right = mid + 1;
        vector<int> temp;
        while(left <= mid && right <= r){
            if(arr[left] < arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right <= r){
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i = l; i <= r; i++)
            arr[i] = temp[i-l];
    }
    
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l >= r)return;
        int mid = l + (r-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, r, mid);
    }
};