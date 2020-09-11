/*
https://practice.geeksforgeeks.org/problems/anagram-1587115620/1/?track=ppc-strings&batchId=221
*/

bool isAnagram(string c, string d){
    
    // Your code here
    if (c.length() != d.length()) return 0;
    
    char a[256] = {0};
    char b[256] = {0};
    int n = c.length();
    for (int i = 0; i < n; i++) {
        a[c[i]]++;
        b[d[i]]++;
    }
    for (int i = 0; i < 256; i++) if (a[i] != b[i]) return 0;
    return 1;
}
