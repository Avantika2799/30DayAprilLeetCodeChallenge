/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/531/week-4/3312/
*/

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int r=matrix.size();
        if(r==0) return 0;
        int c=matrix[0].size();
        if(c==0)return 0;
        
        int max_square=0;
        
        /* vector<vector<int>>sol(r,vector<int>(c,0));
       for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==0||j==0)
                {
                    if(matrix[i][j]=='1')
                    {
                        sol[i][j]=1;
                        max_square=max(max_square,sol[i][j]);
                    }
                }
                else{
                    if(matrix[i][j]=='1')
                    {
                        sol[i][j]=1+min(sol[i-1][j-1],sol[i-1][j],sol[i][j-1]);
                        max_square=max(max_square,sol[i][j]);
                    }
                }
            }
        }*/
        vector<int>sol(c,0);
        int diag=matrix[0][0]=='0'?0:1;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            { int temp=sol[j];
                if(i==0||j==0)
                { 
                    if(matrix[i][j]=='1')
                    {
                        sol[j]=1;
                        max_square=max(max_square,sol[j]);
                    }
                    else
                        sol[j]=0;
                }
                else{
                    if(matrix[i][j]=='1')
                    {
                        sol[j]=1+min({sol[j-1],sol[j],diag});
                        max_square=max(max_square,sol[j]);
                    }
                    else
                        sol[j]=0;
                }
                diag=(j==c-1)?sol[0]:temp;
            }
        }
        return max_square*max_square;
    }
};
