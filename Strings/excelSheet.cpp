/*
https://practice.geeksforgeeks.org/problems/excel-sheet5448/1/?track=ppc-strings&batchId=221
*/

string ExcelColumn(int n)
{
    // Your code goes here
    string S;
    while (n > 0) {
        int rem = n % 26;
        if (rem == 0) {
            S.push_back('Z');
            n = n / 26 - 1;
        }
        else {
            S.push_back('A' + rem - 1);
            n = n / 26;
        }
    }
    reverse(S.begin(), S.end());
    return S;
}
