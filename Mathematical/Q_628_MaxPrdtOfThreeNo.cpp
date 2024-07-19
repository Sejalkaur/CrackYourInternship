/*Link: https://leetcode.com/problems/maximum-product-of-three-numbers/submissions/1326576326/
Example 1:

Input: nums = [1,2,3]
Output: 6
Example 2:

Input: nums = [1,2,3,4]
Output: 24
Example 3:

Input: nums = [-1,-2,-3]
Output: -6

*/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return 0;
        }
       sort(nums.begin(), nums.end());
       int pro=nums[n-1]*nums[n-2]*nums[n-3];
       int pronegative=nums[0]*nums[1]*nums[n-1];
       return max(pro, pronegative);
    }
};
