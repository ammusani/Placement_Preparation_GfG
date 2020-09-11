/*
https://practice.geeksforgeeks.org/problems/convert-to-roman-no/1/?track=ppc-strings&batchId=221
*/

string convertToRoman(int n) 
{
    //Your code here
    string S;
    
    string m[] = {"", "M", "MM", "MMM"}; 
    string c[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}; 
    string x[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}; 
    string i[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    
    S = S + m[n / 1000];
    n = n % 1000;
    S =  S + c[n / 100];
    n = n % 100;
    S = S + x[n / 10];
    n = n % 10;
    S = S + i[n];
    
    return S;
    
}
