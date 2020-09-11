/*
https://practice.geeksforgeeks.org/problems/check-for-binary/1/?track=ppc-strings&batchId=221
*/

//Return 1 if true, else return 0 if not true
int isBinary(char *str)
{
    //Code here
    int l = strlen(str);
    for (int i = 0; i < l; i++) if (str[i] == '0' || str[i] == '1') continue; else return 0;
    return 1;
}
