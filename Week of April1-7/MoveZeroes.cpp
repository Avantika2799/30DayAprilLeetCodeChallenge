/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3286/
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                v.push_back(nums[i]);
        }
        int n=nums.size()-v.size();
        while(n>0)
        {
            v.push_back(0);
            n--;
        }
        nums=v;
    }
};
