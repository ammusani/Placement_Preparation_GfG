/*
https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1/?track=ppc-strings&batchId=221
*/

char getMaxOccuringChar(char* str)
{
    // Your code here
    int a[256] = {0};
    int l = strlen(str);
    
    for (int i = 0; i < l; i++) {
        a[str[i]]++;
    }
    int max = 0;
    int max_loc = - 1;
    for (int i = 0; i < 256; i++) {
        if (max < a[i]) {
            max = a[i];
            max_loc = i;
        }
    }
    return max_loc;
}
