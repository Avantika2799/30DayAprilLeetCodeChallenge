/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3286/
*/

class Solution {
public:
      int sumo(int n)
        {
          int num=0;
            while(n)
            {
                int digit=n%10;
                num=num+digit*digit;
                n=n/10;
            }
            return num;
      }
    bool isHappy(int n) {
       int slow=n ,fast=n;
        do{
        slow=sumo(slow);
            fast=sumo(sumo(fast));
        }
        while(slow!=fast);
        return(slow==1);
        }
};
