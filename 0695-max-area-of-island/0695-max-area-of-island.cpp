class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int maxcount=0;
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    cou(i,j,grid,count);
                }
                if(count>maxcount){
                    maxcount=count;
                }count=0;
            }
        }
        return maxcount;
    }

    void cou(int i,int j,vector<vector<int>> &grid,int &count){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0){
            return;
        }
        count++;
        grid[i][j]=0;
        cou(i+1,j,grid,count);
        cou(i-1,j,grid,count);
        cou(i,j+1,grid,count);
        cou(i,j-1,grid,count);
        return;
    }
};