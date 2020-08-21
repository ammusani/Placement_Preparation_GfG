/*
https://practice.geeksforgeeks.org/problems/gp-term/1/?track=ppc-mathematics&batchId=221
*/

double termOfGP(int A,int B,int N)
{
    if (N == 1) return A;
    if (N == 2) return B;
    
    double r = (double)B / A;
    double M = B;
    
    for (int i = 3; i <= N; i++) M = M * r;
    
    return M;
}
