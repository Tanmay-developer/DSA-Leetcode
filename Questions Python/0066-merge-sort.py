# Problem URL : https://www.geeksforgeeks.org/problems/merge-sort/
# Author      : Tanmay Chopade
# Solved On   : 2026-06-02
# Last Updated: [Optional: Last modification date or version number]
'''
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
'''

class Solution:
    def merge(self, arr, l, r, mid):
        temp = []
        left = l
        right = mid + 1
        
        while left <= mid and right <= r:
            if arr[left] <= arr[right]:
                temp.append(arr[left])
                left += 1
            else:
                temp.append(arr[right])
                right += 1
                
        while left <= mid:
            temp.append(arr[left])
            left += 1
    
        while right <= r:
            temp.append(arr[right])
            right += 1
            
        for i in range(l, r+1):
            arr[i] = temp[i-l]
                
            
    
    def mergeSort(self, arr, l, r):
        if l >= r:
            return
        mid = l + (r-l)//2
        self.mergeSort(arr, l, mid)
        self.mergeSort(arr, mid+1, r)
        self.merge(arr, l, r, mid)