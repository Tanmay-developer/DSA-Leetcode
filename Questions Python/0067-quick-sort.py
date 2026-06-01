# Problem URL : https://www.geeksforgeeks.org/problems/quick-sort/
# Author      : Tanmay Chopade
# Solved On   : 2026-06-02
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
Implement Quick Sort, a Divide and Conquer algorithm, to sort an array, arr[] in ascending order.
Given an array arr[], with starting index low and ending index high, complete the functions partition() 
and quickSort().
Use the last element as the pivot, so that all elements less than or equal to the pivot come before it, 
and elements greater than the pivot follow it.

Note: low and high are inclusive.

Examples:

Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9]
Explanation: After sorting, all elements are arranged in ascending order.
Input: arr[] = [2, 1, 6, 10, 4, 1, 3, 9, 7]
Output: [1, 1, 2, 3, 4, 6, 7, 9, 10]
Explanation: Duplicate elements (1) are retained in sorted order.
Input: arr[] = [5, 5, 5, 5]
Output: [5, 5, 5, 5]
Explanation: All elements are identical, so the array remains unchanged.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105
**************************************************************************************************/
'''

class Solution:
    def quickSort(self, arr, low, high):
        if low < high:
            pivotIndex = self.partition(arr, low, high)
            self.quickSort(arr, low, pivotIndex-1)
            self.quickSort(arr, pivotIndex+1, high)

    def partition(self, arr, low, high):
        pivot = arr[low]
        i = low 
        j = high
        while i < j:
            while arr[i] <= pivot and i <= high - 1:
                i += 1
            while arr[j] >= pivot and j >= low + 1:
                j -= 1
            if i < j:
                arr[i], arr[j] = arr[j], arr[i]
        
        arr[low], arr[j] = arr[j], arr[low]
        return j