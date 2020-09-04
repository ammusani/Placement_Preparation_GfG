/*
https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1/?track=ppc-search-sort&batchId=221
*/

void sort012(int a[], int n)
{
    // coode here
    int b[3] = {0};
    for (int i = 0; i < n; i++) b[a[i]]++;
    int i = 0;
    while (b[0]--) a[i++] = 0;
    while (b[1]--) a[i++] = 1;
    while (b[2]--) a[i++] = 2;
}
