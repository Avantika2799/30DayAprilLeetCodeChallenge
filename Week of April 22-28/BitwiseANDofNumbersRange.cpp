/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/531/week-4/3308/
*/

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int shift=0;
        while(m!=n)
        {  m>>=1;
        n>>=1;
        shift++;
    }
    return m<<shift;
    }
};
