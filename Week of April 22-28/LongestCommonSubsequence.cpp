/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/531/week-4/3311/
*/

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
     int n=text1.size();
        int m= text2.size();
     int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
        }
        for(int j=0;j<=m;j++)
        {
            dp[0][j]=0;
        }
        int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};
