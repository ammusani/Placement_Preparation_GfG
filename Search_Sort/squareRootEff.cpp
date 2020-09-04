/*
https://practice.geeksforgeeks.org/problems/square-root/1/?track=ppc-search-sort&batchId=221
*/

long long int floorSqrt(long long int x) 
{
    
    // Your code goes here
    if (x == 0 || x == 1) return x;
    
    long long int sq;
    long long int l = 1;
    long long int r = x;
    
    while (l <= r) {
        long long mid = l + (r - l) / 2;
        if (mid * mid == x) return mid;
        if (mid * mid < x) {
            sq = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return sq;
}
