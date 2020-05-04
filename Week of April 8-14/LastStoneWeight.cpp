/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3297/
*/

/*
In this question we are going to use priority queue,
let's take an example [2,7,4,1,8,1]
after inserting in priority queue,our input will be sorted in decreasing order
[8,7,4,2,1,1]
after that we'll take the first two elements and compare them
we'll push the difference in the queue and keep comparing till we get only one element
[8,7,4,2,1,1]
p1=1,p2=1,push(p1-p2)
[4,2,1,1,1(pushed)]
[2(pushed),1,1,1]
[1,1,1]
[1,0]
[1]
*/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>p;
        int p1,p2;
        int n=stones.size();
        while(n--)
        {
            p.push(stones[n]);
        }
        while(!p.empty())
        {
            if(p.size()==1)
                return p.top();
            p1=p.top();
            p.pop();
            p2=p.top();
            p.pop();
            
            if(p1!=p2)
                p.push(p1-p2);
            else
                p.push(0);
        }
        return p.top();
    }
};
