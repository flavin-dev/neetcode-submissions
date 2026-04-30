class Solution {
    int diff[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
    private:
    void dfs(vector<vector<char>>&grid,int row,int col){
        if(row<0||col<0||row>=grid.size()||col>=grid[0].size()||grid[row][col]=='0'){
            return;
        }
        grid[row][col]='0';
        for(int i=0;i<4;i++){
            dfs(grid,row+diff[i][0],col+diff[i][1]);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int R=grid.size(),C=grid[0].size();
        int island=0;
        for(int row=0;row<R;row++){
            for(int col=0;col<C;col++){
                if(grid[row][col]=='1'){
                    dfs(grid,row,col);
                    island++;
                }
            }
        }
        return island;
    }
};