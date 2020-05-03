/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3288/
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>dict;
        for(auto &st : strs)
        {
            string k=st;
            sort(k.begin(),k.end());
            dict[k].push_back(st);
        }
        vector<vector<string>>result;
        for(auto &i : dict)
        {
            result.push_back(move(i.second));
        }
        return result;
    }
};
