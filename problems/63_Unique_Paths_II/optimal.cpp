https://leetcode.com/problems/unique-paths-ii/discuss/23248/My-C%2B%2B-Dp-solution-very-simple!
// think:將dp擴充一個欄位 可以不用解決初始化的問題
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.empty())return 0 ;
        int row=obstacleGrid.size();
        int col = obstacleGrid[0].size();
        vector<vector<int>> dp(row+1,vector<int>(col+1,0));
        dp[0][1] = 1;

        for(int i=1;i<row+1;i++){
            for(int j=1;j<col+1;j++){
                dp[i][j] = obstacleGrid[i-1][j-1] ? 0:dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[row][col];
    }

};
