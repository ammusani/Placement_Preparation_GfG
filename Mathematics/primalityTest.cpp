/*
https://practice.geeksforgeeks.org/problems/primality-test/1/?track=ppc-mathematics&batchId=221
*/

bool isPrime(int N)
{
    //Your code here
    if (N < 2) return false;
    if (N == 2) return true;
    if (N % 2 == 0) return false;
    for (int i = 3; i <= sqrt(N); i += 2) {
        if (N % i == 0) return false;
    }
    return true;
}
