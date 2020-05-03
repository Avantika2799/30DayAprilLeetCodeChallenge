/*
    Question - Single Number
    Link - > https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3283/
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int a= nums[0];
        int nump=0;
        for(int i=1;i<nums.size();i++)
        {
        a=a^nums[i];
        }
    return a;
    }
};
