/*
https://practice.geeksforgeeks.org/problems/modular-multiplicative-inverse-1587115620/1/?track=ppc-mathematics&batchId=221
*/

int gcd (int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1;
    int y1;
    int d = gcd (b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}


//Complete this function
// Modular inverse using Extended Euclidean
int modInverse(int a, int m)
{
    int x;
    int y;
    if (m == 1) return -1;
    int g = gcd (a, m, x, y);
    if (g != 1) return -1;
    return (x % m + m) % m;
}
