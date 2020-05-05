/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/530/week-3/3304/
*/


class Solution {
public:
    int search(vector<int>& nums, int target) {  
        int l=0;
        int n=nums.size();
        if(n==0) return -1;
        int r=n-1;
       while(l<r)
       {
           int mid=l+(r-l)/2;
           
           if(nums[mid]>nums[r])
               l=mid+1;
           else
               r=mid;
       }
        if(target<=nums[n-1])
        return bin( nums,target,l,n-1);
        else
             return bin( nums,target,0,l-1);
    }
    
    
    
     int bin(vector<int>& nums, int target,int l,int r)
        {  
        while(l<=r)
        {
            int m=l+(r-l)/2;
            
                if(nums[m]==target)
                    return m;
            
             if (nums[m] < target) 
            l = m + 1; 
            
            else
                r=m-1;
        }
        return -1;
    }
};
