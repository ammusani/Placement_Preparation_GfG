/*
https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1/?track=ppc-matrix&batchId=221
*/

class Solution
{   
public:     
    void transpose(vector<vector<int> >& m, int n)
    { 
        // code here
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int temp = m[i][j];
                m[i][j] = m[j][i];
                m[j][i] = temp;
            }
        }
    }
};
