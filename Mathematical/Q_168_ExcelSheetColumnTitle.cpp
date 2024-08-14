//Link: https://leetcode.com/problems/excel-sheet-column-title/description/
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        int remainder;
        while(columnNumber>0){
            columnNumber--;
            remainder=columnNumber%26;
            result+=remainder+'A';
            columnNumber=columnNumber/26;
        }
        reverse(begin(result), end(result));
        return result;
    }
};
