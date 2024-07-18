/*Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int maxPro=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            int currentPro=prices[i]-min;
            if(currentPro>maxPro){
                maxPro=currentPro;
            }
        }
        return maxPro;

    }
};
