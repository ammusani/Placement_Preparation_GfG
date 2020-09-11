/*
https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1/?track=ppc-strings&batchId=221
*/

bool areIsomorphic(string str1, string str2)
{
    
    // Your code here
    if (str1.length() != str2.length()) return 0;
    map<char, char> m;
    int n = str1.length();
    int map[256]; 
    memset(map, -1, sizeof(map));
    bool marked[256] = {false};
    for (int i = 0; i < n; i++) {
        if (map[str1[i]] == -1) {
            if (marked[str2[i]]) return 0;
            else {
                map[str1[i]] = str2[i];
                marked[str2[i]] = true;
            }
        }
        else if (map[str1[i]] != str2[i]) return 0;
    }
    return 1;
}
