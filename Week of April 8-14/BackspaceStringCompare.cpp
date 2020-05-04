/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3291/
*/


//Firstly we pushed the element one by one and simultaneously checked if it is '#', if it was we pop it and then check if string is empty or not 
// if it is not empty we pop the element(backspace)

class Solution {
public:
    bool backspaceCompare(string S, string T) {
string v;
        string w;
        for(int i=0;i<S.length();i++)
        {
            v.push_back(S[i]);
            if(S[i]=='#')
            {
                v.pop_back();
                if(v.length()!=0)
                v.pop_back();
            }
        }
// same is repeated for this string and then if both are same we return true else false
        
         for(int i=0;i<T.length();i++)
        {
            w.push_back(T[i]);
            if(T[i]=='#')
            {
                w.pop_back();
                if(w.length()!=0)
                w.pop_back();
            }
        }
        return v==w;
    }
};
