# Problem URL : https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
# Author      : Tanmay Chopade
# Solved On   : 2026-05-21
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************

Problem Description:
-----------------------------------------------------------------------------------------------
Given an array arr[] of integers, where each element arr[i] represents the number of pages in the 
i-th book. You also have an integer k representing the number of students. The task is to allocate 
books to each student such that:

Each student receives atleast one book.
Each student is assigned a contiguous sequence of books.
No book is assigned to more than one student.
All books must be allocated.
The objective is to minimize the maximum number of pages assigned to any student. In other words, 
out of all possible allocations, find the arrangement where the student who receives the most pages 
still has the smallest possible maximum.

Note: If it is not possible to allocate books to all students, return -1.

Examples:

Input: arr[] = [12, 34, 67, 90], k = 2
Output: 113
Explanation: Allocation can be done in following ways:
=> [12] and [34, 67, 90] Maximum Pages = 191
=> [12, 34] and [67, 90] Maximum Pages = 157
=> [12, 34, 67] and [90] Maximum Pages = 113.
The third combination has the minimum pages assigned to a student which is 113.
Input: arr[] = [15, 17, 20], k = 5
Output: -1
Explanation: Since there are more students than total books, it's impossible to allocate a book to each student.
Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i], k ≤ 103
***************************************************************************************************/
'''

class Solution:
    def isPossible(self, arr, k, n, mid):
        studentCount = 1
        pageSum = 0
        for i in range(n):
            if pageSum + arr[i] <= mid:
                pageSum += arr[i]
            else:
                studentCount += 1
                if studentCount > k or arr[i] > mid:
                    return False
                pageSum = arr[i]
        return True
    
    def findPages(self, arr, k):
        if k > len(arr):
            return -1
        s = 0
        e = sum(arr)
        n = len(arr)
        ans = -1
        while s <= e:
            mid = s + (e-s)//2
            if self.isPossible(arr, k, n, mid):
                ans = mid
                e = mid - 1
            else:
                s = mid + 1
        return ans