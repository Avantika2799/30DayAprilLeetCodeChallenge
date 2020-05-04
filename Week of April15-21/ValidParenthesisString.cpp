/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/530/week-3/3301/
*/

class Solution {
public:
    bool checkValidString(string s) {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='*')
            count++;
            else
                count--;
            if(count<0) return false;
        }
        if(count==0) return true;
        count=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==')' || s[i]=='*')
            count++;
            else
                count--;
            if(count<0) return false;
        }
        
     return true;
    }
};
