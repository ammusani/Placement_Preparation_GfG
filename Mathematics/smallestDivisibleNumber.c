/*
https://practice.geeksforgeeks.org/problems/smallest-divisible-number/1/?track=ppc-mathematics&batchId=221
*/

long long gcd (long long a, long long b) {
    if (a < b) {
        a += b;
        b = a - b;
        a = a - b;
    }
    if (b == 0) return a;
    return gcd (b, a % b);
}

/*You are required to complete this method */
long long getSmallestDivNum(long long n)
{
    long long l = 1;
    for (int i = 2; i <= n; i++) {
        l = l * i / gcd (l, i);
    }
    
    return l;
}

