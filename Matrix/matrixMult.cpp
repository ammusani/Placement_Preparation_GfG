/*
https://practice.geeksforgeeks.org/problems/multiply-the-matrices-1587115620/1/?track=ppc-matrix&batchId=221
*/

class Solution
{   
public:
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code 
        vector<vector<int>> c;
        vector<int> l;
        if (A[0].size() != B.size()) return c;
        
        for (int i = 0; i < A.size(); i++) {
            c.push_back(l);
            for (int j = 0; j < B[0].size(); j++) {
                c[i].push_back(0);
                for (int k = 0; k < B.size(); k++) {
                    c[i][j] = c[i][j] + A[i][k] * B[k][j];
                }
            }
        }
        return c;
    }
};
