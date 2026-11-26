class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int maxsum=0;
        int sum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                cou(i,j,grid,sum);
                if(sum>maxsum){
                    maxsum=sum;
                }sum=0;
            }
        }
        return maxsum;
    }

    void cou(int i,int j,vector<vector<int>> &grid,int &sum){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0){
            return;
        }
        sum+=grid[i][j];
        grid[i][j]=0;
        cou(i+1,j,grid,sum);
        cou(i-1,j,grid,sum);
        cou(i,j+1,grid,sum);
        cou(i,j-1,grid,sum);
        return;
    }
    
};