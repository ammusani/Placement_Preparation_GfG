/*
https://practice.geeksforgeeks.org/problems/determinant-of-a-matrix-1587115620/1/?track=ppc-matrix&batchId=221
*/

class Solution
{   
public:

    void coFactor(int n, vector<vector<int>> &t, vector<vector<int>> m, int p, int q) {
        int l = 0;
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (i != p) {
                for (int j = 0; j < n; j++) {
                    if (j != q) {
                        t[l][k++] = m[i][j];
                    }
                    if (k == n - 1) {
                        k = 0;
                        l++;
                    }
                }
            }
        }
    }
    
    int determinantOfMatrix(vector<vector<int> > mat, int n)
    {
        // code here
        
        if (n == 1) return mat[0][0];
        
        int D = 0;
        vector<vector<int>> t(n, vector<int>(n));
        int sign = 1;
        for (int i = 0; i < n; i++) {
            coFactor(n, t, mat, 0, i);
            D = D + sign * mat[0][i] * determinantOfMatrix(t, n - 1);
            sign = -sign;
            
        }
        return D;
    }
};
