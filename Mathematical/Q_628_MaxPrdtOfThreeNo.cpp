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
//1st appr
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
//2nd appr
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
       
         int max1 = nums[0], max2 = INT_MIN, max3 = INT_MIN;
        int min1 = nums[0], min2 = INT_MAX;
        for(int i=1;i<n;i++){
            if(min1>nums[i]){
                min2=min1;
                min1=nums[i];
            }else if(min2>nums[i]){
                min2=nums[i];
            }
            if(max1<nums[i]){
                max3=max2;
                max2=max1;
                max1=nums[i];
            }else if(max2<nums[i]){
                max3=max2;
                max2=nums[i];
            }else if(max3<nums[i]){
                max3=nums[i];
            }
        }
        int pos=max3*max2*max1;
        int neg=max1*min2*min1;
        return max(pos, neg);
    }
};
