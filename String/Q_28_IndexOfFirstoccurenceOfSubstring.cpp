/*Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.*/
class Solution {
public:
    int strStr(string haystack, string needle) {
       size_t pos = haystack.find(needle);//size_t is a datatype representing index
        if (pos != string::npos) {//needle found bcz this is the constant value of not found
            return pos;
        }
        return -1;
    }
};
