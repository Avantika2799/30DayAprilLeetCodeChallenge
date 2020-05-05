/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/530/week-3/3303/
*/

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i>0 && j>0)
                    grid[i][j]+=min(grid[i][j-1],grid[i-1][j]);
                else if(i==0  && j>0)
                      grid[i][j]+=grid[i][j-1];
                else if (j==0 && i>0)
                      grid[i][j]+=grid[i-1][j];
            }
        }
        return grid[n-1][m-1];
    }
};
