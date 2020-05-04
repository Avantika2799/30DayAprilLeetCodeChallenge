/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3298/
*/

/*
In this problem 
we will use an unordered map to store the [count,index]
we'll assume an index -1 having a count=0
we'll add 1 to count when there's a 1 and subtract 1 when 0 appears
for the different count values encountered we'll store them in the map else
we'll subtract the indexes and check if it's greater than maxx
EXAMPLE
 0 1 2 3 4 5 6 7 8 //indexes
[0,1,0,0,0,0,1,0,1]
-1 0-1-2-3-4-3-4-3 //count
[count,index]
  0      -1   //assumed
 -1       0   m[-1]=0
  0 appears again so maxx=max(maxx,i-m[count])  (0,1-m[0]) = 2
  -1 appears again so maxx=max(2,2-m[-1]) =2   as m[-1]=0
  -2       3  m[-2]=3
  -3       4  m[-3]=4
  -4       5  m[-4]=5
  -3 appears again so maxx=max(2,6-m[-3]) max(2,2)=2
  -4 appears again so maxx=max(2,7-m[-4]) =2
  -3 appears again so maxx=max(2,8-m[-3]) max(2,4)=4
  maxx=4
*/

class Solution { 
public:
    int findMaxLength(vector<int>& nums) {
      if(nums.size()<=1)
         return 0;
         
        unordered_map<int,int>m;
        int count= nums[0]== 1 ? 1 : -1;
        m[0]=-1;
        m[count]=0;
        int maxx=0;
        
        for(int i=1;i<nums.size();i++)
        {
            count=(nums[i]==1)?count+1:count-1;
            
         if(m.find(count)!=m.end())
         maxx=max(maxx,i-m[count]);
         else
         m[count]=i;
        }
        return maxx;
    }
};
