//Link: https://leetcode.com/problems/add-binary/
class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int c1=a.length()-1;
        int c2=b.length()-1;
        int carry=0;
        while(c1>=0 || c2>=0){
            int sum=carry;
            if(c1>=0)sum+=a[c1--]-'0';
            if(c2>=0)sum+=b[c2--]-'0';
            carry=sum>1 ? 1:0;
            result+=to_string(sum%2);
        }
        if(carry)result+=to_string(carry);
        reverse(result.begin(), result.end());
        return result;

    }
};
