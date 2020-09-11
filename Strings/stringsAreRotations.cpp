/*
https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1/?track=ppc-strings&batchId=221
*/

bool areRotations(string s1,string s2)
{
    if (s1.length() != s2.length()) return 0;
    string temp = s1 + s1;
    return temp.find(s2) != string::npos;
    return 0;
}
