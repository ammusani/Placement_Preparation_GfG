/*
https://practice.geeksforgeeks.org/problems/implement-strstr/1/?track=ppc-strings&batchId=221
*/

int strstr(string s, string x)
{
     //Your code here
     int i = 0;
     int j = 0;
     while (i < s.length()) {
         if (s[i] == x[0]) {
             int k = i;
             while (j < x.length() && i < s.length()) {
                 if (s[i] == x[j]) {
                     i++;
                     j++;
                     if (j == x.length()) return k;
                 }
                 else {
                     j = 0;
                     i = k;
                     break;
                 }
             }
         }
         i++;
         
     }
     return -1;
}
