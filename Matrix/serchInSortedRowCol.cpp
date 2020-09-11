/*
https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1/?track=ppc-matrix&batchId=221
*/

bool search(vector<vector<int> > mat, int n, int m, int x) 
{
    // code here
    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0) {
        if (x == mat[i][j]) return 1;
        if (x > mat[i][j]) i++;
        else if (x < mat[i][j]) j--;
    }
    return 0;
}
