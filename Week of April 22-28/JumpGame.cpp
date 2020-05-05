/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/531/week-4/3310/
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
      int n=nums.size()-1;
        int pos=0;
        for(int i=0;i<=n;i++)
        {
            if(i+nums[i]>=pos)
            {
                pos=nums[i]+i;
            }
            if(pos==i)
                break;
        }
        return pos>=n;
    }
};
