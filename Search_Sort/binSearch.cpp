/*
https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1/?track=ppc-search-sort&batchId=221
*/
int bin_search(int A[], int left, int right, int k)
{
    int mid = left + (right - left) / 2;
    
    if (left > right) return -1;
    if (A[mid] == k) return mid;
    if (A[mid] > k) return bin_search(A, left, mid - 1, k);
    return bin_search(A, mid + 1, right, k);
}
