/*Link: https://leetcode.com/problems/valid-palindrome-ii/description/
Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.*/
class Solution {
public:
    bool checkPalindrome(string str, int s, int e){
        while(s<=e){
             if(str[s]!=str[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    bool validPalindrome(string str) {
        int s=0;
        int e=str.size()-1;
        while(s<=e){
            if(str[s]!=str[e]){
                return checkPalindrome(str, s+1, e)|| checkPalindrome(str, s, e-1);
            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }
};
