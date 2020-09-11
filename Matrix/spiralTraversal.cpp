/*
https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/?track=ppc-matrix&batchId=221
*/

class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > m, int l, int n) 
    {
        // code here
        int a = 0;
        int b = l;
        int c = 0;
        int d = n;
        int i = 0;
        vector<int> v;
        while (a < b && c < d) {
            for (int i = c; i < d; i++) v.push_back(m[a][i]);
            a++;
            if (a >= b) break;
            for (int i = a; i < b; i++) v.push_back(m[i][d - 1]);
            d--;
            if (c >= d) break;
            if (d > c) {
                for (int i = d - 1; i >= c; i--) v.push_back(m[b - 1][i]);
                b--;
            }
            if (b > a) {
                for (int i = b - 1; i >= a; i--) v.push_back(m[i][c]);
                c++;
            }
            
        }
        return v;
    }
};
