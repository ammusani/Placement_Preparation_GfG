/*
https://practice.geeksforgeeks.org/problems/adding-two-matrices3512/1/?track=ppc-matrix&batchId=221
*/

class Solution
{   
public:
    vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        vector<vector<int>> c;
        vector<int> l;
        if (A.size() != B.size() || A[0].size() != B[0].size()) return c;
        for (int i = 0; i < A.size(); i++) {
            c.push_back(l);
            for (int j = 0; j < A[0].size(); j++) c[i].push_back(A[i][j] + B[i][j]);
        }
        return c;
    }
};
