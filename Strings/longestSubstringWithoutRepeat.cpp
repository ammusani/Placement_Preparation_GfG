/*
https://practice.geeksforgeeks.org/problems/longest-substring-without-repeating-characters/1/?track=ppc-strings&batchId=221
*/

int SubsequenceLength (string s) 
{
    // Your code goes here
    int a[256];
    for (int i = 0; i < 256; i++) a[i] = -1;
    int m = 0;
    int l = 0;
    for (int i = 0; i < s.length(); i++) {
        l = max(l, a[s[i]] + 1);
        //cout << l << a[s[i]] << " " << (int)s[i] << endl;
        m = max(m, i - l + 1);
        //cout << m << " " << i - l + 1 << endl;
        a[s[i]] = i;
    }
    return m;
}
