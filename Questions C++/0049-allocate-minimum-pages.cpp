// Problem URL : https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
// Author      : Tanmay Chopade
// Solved On   : 2026-05-21
// Last Updated: [Optional: Last modification date or version number]

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

class Solution {
  public:
    bool isPossible(vector<int> &arr, int n, int k, int mid){
        int studentCount = 1;
        int pageSum = 0;
        for(int i = 0; i < n; i++){
            if(pageSum + arr[i] <= mid){
                pageSum += arr[i];
            }
            else{
                studentCount++;
                if(studentCount > k || arr[i] > mid){
                    return false;
                }
                pageSum = arr[i];
            }
        }
        return true;
    }  
  
    int findPages(vector<int> &arr, int k) {
        if(k > arr.size())return -1;
        int s = 0;
        int e = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;
        int n = arr.size();
        int mid = s + (e-s)/2;
        while(s <= e){
            if(isPossible(arr, n, k, mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};