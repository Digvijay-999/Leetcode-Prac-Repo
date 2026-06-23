class Solution {
public:

    int dfs(vector<vector<int>>& grid, int i,int j){
        int n=grid.size();
        int m=grid[1].size();
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0){
            return 0;
        }
        int gold=grid[i][j];
        grid[i][j]=0;
        int maxG=0;
        maxG =max(maxG, dfs(grid,i+1,j));
        maxG =max(maxG, dfs(grid,i-1,j));
        maxG =max(maxG, dfs(grid,i,j+1));
        maxG =max(maxG, dfs(grid,i,j-1));
        

        grid[i][j]=gold;
        return maxG+gold;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[1].size();
        int maxx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] != 0){
                    maxx=max(maxx,dfs(grid,i,j));
                }
            }
        }
        return maxx;
    }
};