/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3287/
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int gain=0;
        for(int i=1;i<prices.size();i++)
        {
if(prices[i]>prices[i-1])
{
    gain=gain+(prices[i]-prices[i-1]);
}
        }
        return gain;
    }
};
