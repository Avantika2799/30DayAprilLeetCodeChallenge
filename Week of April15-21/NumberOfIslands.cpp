/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/530/week-3/3302/
*.


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        count=0;
        for i in grid.size():
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1'){
                    count++;
                island(grid,i,j);
            }
        }
        }
        return count;
    }
    
    private:
    void island(vector<vector<char>>& gridi,int i,int j)
    {
        if(gridi[i][j]!='1')
            return;
            if(i<0 || i==gridi.size()|| j<0 ||j==gridi[0].size())
                return;
            
            gridi[i][j]='0';
        if(i<gridi.size()-1)
            island(gridi,i+1,j);
            if(i>0)
                island(gridi,i-1,j);
                if(j<gridi[0].size()-1)
                    island(gridi,i,j+1);
                    if(j>0)
                    island(gridi,i,j-1);
    }
    
};
