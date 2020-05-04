/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/530/week-3/3300/
*/

/*
[1,2,3,4]              
v[0]=1,l=1*1         v[0]=1*24  r=1*24=24
v[1]=1,l=1*2=2       v[1]=1*12  r=12*2=24
v[2]=2 l=2*3=6       v[2]=2*4=8 r=4*3=12
v[3]=6 l=6*4=24      v[3]=6*1=6 r=1*4=4
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,1);
              int l=1;
        int r=1;
        for(int i=0;i<n;i++)
        {
            v[i]=l;
            l=l*nums[i];
        }
         for(int i=n-1;i>=0;i--)
        {
            v[i]=v[i]*r;
            r=r*nums[i];
        }
        return v;
    }
    
};
