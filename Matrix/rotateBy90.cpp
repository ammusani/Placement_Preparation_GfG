/*
https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1/?track=ppc-matrix&batchId=221
*/

class Solution
{   
public:     
    void rotateby90(vector<vector<int> >& m, int n) 
    { 
        // code here 
        for (int i = 0; i < n / 2; i++) {
            for (int j = i; j < n - i - 1; j++) {
                int temp = m[i][j];
                m[i][j] = m[j][n - i - 1];
                m[j][n - i - 1] = m[n - i - 1][n - j - 1];
                m[n - i - 1][n - j - 1] = m[n - j - 1][i];
                m[n - j - 1][i] = temp;
            }
        }
    } 
};
