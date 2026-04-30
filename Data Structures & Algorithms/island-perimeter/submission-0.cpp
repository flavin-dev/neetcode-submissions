class Solution {
    private:
    int dfs(int i,int j,vector<vector<int>>&grid,vector<vector<bool>>&visited){
        if(i>=grid.size()||j>=grid[0].size()|| i<0||j<0||grid[i][j]==0){
            return 1;
        }
        if(visited[i][j]==true){
            return 0;
        }
        visited[i][j]=true;
        int perim=0;
        perim=dfs(i,j+1,grid,visited);
        perim+=dfs(i+1,j,grid,visited);
        perim+=dfs(i-1,j,grid,visited);
        perim+=dfs(i,j-1,grid,visited);
        return perim;

    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),false));
        int perim=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    
                    return dfs(i,j,grid,visited);
                }
            }
        }
        return dfs(0,0,grid,visited);
    }
};