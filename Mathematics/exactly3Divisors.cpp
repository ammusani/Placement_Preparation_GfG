/*
https://practice.geeksforgeeks.org/problems/exactly-3-divisors/1/?track=ppc-mathematics&batchId=221
*/

//Complete this function
int exactly3Divisors(int N)
{
    // Sieve of Eratosthenes for sqrt(n)
    int count = 0;
    int a = floor(sqrt(N));
    int arr[a + 1];
    for (int i = 0; i <= a; i++) arr[i] = 0;
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= a; i++) {
        if (arr[i] == 0) {
            count++;
            for (int j = i; j * i <= a; j++) {
                arr[i * j] = 1;
            }
        }
    }
    
    return count;
}
